/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 14:56:24 by imaalem           #+#    #+#             */
/*   Updated: 2022/02/16 15:58:48 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	len(long nb)
{
	long	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*convert_int_to_char(char **str, long n, int i)
{
	*str[i--] = '\0';
	if (n == 0)
	{
		*str[0] = 48;
		return (*str);
	}
	if (n < 0)
	{
		*str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		*str[i--] = 48 + (n % 10);
		n = n / 10;
	}
	return (*str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	long	n;
	int		i;

	n = nb;
	i = len(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	convert_int_to_char(&str, n, i);
	return (str);
}
