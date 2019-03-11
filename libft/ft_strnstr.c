/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 18:09:38 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 17:07:56 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t i;
	size_t j;
	size_t size;
	size_t kostil;

	i = -1;
	kostil = len;
	size = ft_strlen(to_find);
	if (len == 0)
		return (NULL);
	if (to_find[0] == '\0' || str == to_find)
		return (str);
	while (str[++i] != '\0' && (len-- - size + 1 > 0))
	{
		j = 0;
		while (to_find[j] != '\0' && j < kostil)
		{
			if (to_find[j] != str[i + j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
	}
	return (NULL);
}
