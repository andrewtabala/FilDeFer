/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:35:33 by atabala           #+#    #+#             */
/*   Updated: 2018/10/26 13:15:19 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*buff;

	buff = malloc(size);
	if (buff == NULL)
		return (NULL);
	else
	{
		ft_memset(buff, 0, size);
		return (buff);
	}
}
