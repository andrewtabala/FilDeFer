/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:30:04 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 16:28:29 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../fdf.h"

static int			incr(const char *s, int i, char c)
{
	while (s[i] == c)
		i++;
	return (i);
}

char				**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	if (s == NULL)
		return (NULL);
	SP;
	i = incr(s, i, c);
	while (s[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		if ((s[i] >= 48 && s[i] <= 57) || s[i] == 45)
		{
			while (s[i] != c && s[i])
				split[k][j++] = s[i++];
		}
		else
			exit(0);
		SPLM2;
	}
	split[k] = NULL;
	return (split);
}
