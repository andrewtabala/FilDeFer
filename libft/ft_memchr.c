/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:04:55 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 15:30:49 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*string;
	unsigned char		cc;
	size_t				i;

	cc = (unsigned char)c;
	string = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (string[i] == cc)
			return (string + i);
		i++;
	}
	return (NULL);
}
