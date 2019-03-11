/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 07:00:00 by atabala           #+#    #+#             */
/*   Updated: 2018/10/30 07:08:11 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countchr(char *str, unsigned char chr, int i)
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		if (i == 1)
		{
			if ((chr >= 65 && chr <= 90) &&
				(str[index] == chr || str[index] == (int)chr + 32))
				count++;
			else if ((chr >= 97 && chr <= 122) &&
				(str[index] == chr || str[index] == (int)chr - 32))
				count++;
		}
		else
		{
			if (str[index] == chr)
				count++;
		}
		index++;
	}
	return (count);
}
