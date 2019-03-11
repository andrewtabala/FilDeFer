/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:47:11 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 14:53:01 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*fresh;
	size_t		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	fresh = malloc(ft_strlen((char*)s) + 1);
	if (fresh == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		fresh[i] = f(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
