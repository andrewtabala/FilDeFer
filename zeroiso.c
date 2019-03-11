/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zeroiso.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:55:20 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 15:57:00 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	drawmatrixiso(t_pr *pr)
{
	START;
	while (pr->file[RE])
	{
		TMP = pr->file[RE];
		RE++;
		while (TMP[I] != '\0')
		{
			VAL = ft_atoi(&TMP[I][0]);
			if (RE > 1)
				PVAL = ft_atoi(&PTMP[I][0]);
			if (I == 0 && ft_atoi(&TMP[I][0]) == 0)
				drawlinez(X1, X2, Y2, pr);
			else if (I > 0 && ft_atoi(&TMP[I - 1][0]) == 0 && VAL == 0)
				drawlinez(X1, X2, Y2, pr);
			if (RE > 1 && PVAL == 0 && VAL == 0)
			{
				KOSTIL1;
			}
			NEXTNUM;
		}
		NEX;
	}
	setdef(pr);
}
