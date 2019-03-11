/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 12:05:07 by atabala           #+#    #+#             */
/*   Updated: 2018/10/25 13:26:28 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t					i;
	char *restrict			destination;
	const char *restrict	source;

	i = 0;
	destination = dst;
	source = src;
	while (i != n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
