/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 18:08:33 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 15:33:29 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int		check(char *str)
{
	int i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if ((str[i] >= 43 && str[i + 1] >= 43) && (str[i] && str[i + 1] <= 45 &&
		str[i] <= 45))
		return (-1);
	if (str[i] == '+')
		i++;
	return (i);
}

int				ft_atoi(char *str)
{
	size_t				i;
	unsigned long int	j;
	int					o;

	i = check(str);
	j = 0;
	o = 1;
	if (str[i] == 45)
	{
		o = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		if ((j > 922337203685477580 || (j == 922337203685477580
			&& (str[i] - '0') > 7)) && o == 1)
			return (-1);
		else if ((j > 922337203685477580 || (j == 922337203685477580
				&& (str[i] - '0') > 8)) && o == -1)
			return (0);
		j = (j * 10) + (str[i] - '0');
		i++;
	}
	return (j * o);
}
