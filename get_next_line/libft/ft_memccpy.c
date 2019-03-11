/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 12:46:47 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 16:11:21 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char *restrict				destination;
	unsigned const char *restrict		source;
	size_t								i;
	unsigned char						v;

	v = (unsigned char)c;
	source = src;
	destination = dst;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == v)
		{
			destination[i++] = v;
			return (destination + i);
		}
		i++;
	}
	return (NULL);
}
