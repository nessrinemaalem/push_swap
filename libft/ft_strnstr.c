/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 10:21:01 by imaalem           #+#    #+#             */
/*   Updated: 2022/02/16 13:58:20 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)string);
	while ((string[i] != '\0') && (needle[j] != '\0') && (i < len))
	{
		j = 0;
		if (string[i] == needle[0])
		{
			while (string[j + i] == needle[j] && ((i + j) < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *)string + i);
				++j;
			}
		}
		i++;
	}
	return (NULL);
}
