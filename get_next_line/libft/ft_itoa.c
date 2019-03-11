/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:29:53 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 10:34:47 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_ndigits(int num)
{
	int c;

	c = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 10;
		c++;
	}
	return (c);
}

char		*ft_itoa(int n)
{
	int			digits;
	int			minus;
	char		*result;

	minus = (n < 0) ? 1 : 0;
	digits = get_ndigits(n);
	if (!(result = ft_strnew((size_t)(digits + minus))))
		return (result);
	if (minus)
		result[0] = '-';
	else if (n > 0)
		digits--;
	else
		result[0] = '0';
	while (n)
	{
		if (n > 0)
			result[digits] = '0' + (n % 10);
		else
			result[digits] = '0' + -(n % 10);
		n = n / 10;
		digits--;
	}
	return (result);
}
