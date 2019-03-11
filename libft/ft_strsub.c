/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:46:52 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 14:55:01 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*string;
	size_t			a;

	if (s == NULL)
		return (NULL);
	i = (size_t)start;
	a = 0;
	string = malloc(len + 1);
	if (string == NULL)
		return (NULL);
	while (a < len)
	{
		string[a] = s[i];
		i++;
		a++;
	}
	string[a] = '\0';
	return (string);
}
