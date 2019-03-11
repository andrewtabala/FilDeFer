/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 18:10:50 by atabala           #+#    #+#             */
/*   Updated: 2018/10/25 13:08:04 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*dupe;

	len = ft_strlen(src);
	dupe = malloc(len + 1);
	if (dupe == NULL)
		return (NULL);
	return (ft_strcpy(dupe, src));
}
