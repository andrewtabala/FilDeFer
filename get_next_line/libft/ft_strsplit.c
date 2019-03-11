/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:30:04 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 15:24:07 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	i = 0;
	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	i = incr(s, i, c);
	while (s[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (s[i] != c && s[i])
			split[k][j++] = s[i++];
		i = incr(s, i, c);
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}
