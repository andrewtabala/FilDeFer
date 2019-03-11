/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 11:53:53 by atabala           #+#    #+#             */
/*   Updated: 2018/10/25 17:41:30 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int			i;
	int			length;
	char		*string;

	if (s == NULL)
		return (NULL);
	length = ft_strlen((char*)s);
	while (s[length - 1] == ' ' || s[length - 1] == '\t'
			|| s[length - 1] == '\n')
		length--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		length--;
	if (length <= 0)
		length = 0;
	string = (char*)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	s = s + i;
	i = -1;
	while (++i < length)
		string[i] = *s++;
	string[i] = '\0';
	return (string);
}
