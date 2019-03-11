/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:46:29 by atabala           #+#    #+#             */
/*   Updated: 2018/10/26 12:41:02 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *buff;

	buff = (char*)malloc(size + 1);
	if (buff == NULL)
		return (NULL);
	ft_memset(buff, 0, size + 1);
	return (buff);
}
