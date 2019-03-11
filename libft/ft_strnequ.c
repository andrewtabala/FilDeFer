/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:46:27 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 15:23:01 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (s1 == NULL || s2 == NULL)
		return ((int)NULL);
	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (1);
	if (n)
	{
		while ((s1[i] != '\0' && s2[i] != '\0') && i != n)
		{
			if (s1[i] != s2[i])
				return (0);
			else
				i++;
		}
	}
	return (1);
}
