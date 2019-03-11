/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 17:27:23 by atabala           #+#    #+#             */
/*   Updated: 2018/07/17 21:52:05 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int istr;
	int ifind;

	if (to_find[0] == '\0')
		return (str);
	istr = 0;
	while (str[istr] != '\0')
	{
		ifind = 0;
		while (to_find[ifind] != '\0')
		{
			if (str[istr + ifind] != to_find[ifind])
				break ;
			ifind++;
		}
		if (to_find[ifind] == '\0')
			return (str + istr);
		istr++;
	}
	return (0);
}
