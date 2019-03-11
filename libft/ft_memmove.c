/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 14:23:49 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 11:04:24 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static void		*ft_memcpyrev(void *restrict dst,
		const void *restrict src, size_t n)
{
	size_t					i;
	char *restrict			destination;
	const char *restrict	source;

	i = n;
	destination = dst;
	source = src;
	while (i > 0)
	{
		destination[i - 1] = source[i - 1];
		i--;
	}
	return (destination);
}

void			*ft_memmove(void *dst, const void *restrict src, size_t n)
{
	size_t					i;

	i = 0;
	if (src > dst)
		ft_memcpy(dst, src, n);
	else
		ft_memcpyrev(dst, src, n);
	return (dst);
}
