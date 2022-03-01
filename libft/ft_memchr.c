/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaalem <imaalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:44:38 by imaalem           #+#    #+#             */
/*   Updated: 2022/02/16 15:24:22 by imaalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*src;
	unsigned int	i;

	src = (char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (char)c)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
