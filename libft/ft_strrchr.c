/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:29:14 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 16:33:04 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	int		i;
	int		z;
	int		count;

	i = 0;
	z = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			z = i;
			count++;
		}
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	if (z == 0 && count == 0)
		return (NULL);
	else
		return (s + z);
}
