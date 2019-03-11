/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parallel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:02:41 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 16:04:25 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	negativeparhori(t_pr *pr)
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
			if (VAL < 0 || (I > 0 && ft_atoi(&TMP[I - 1][0]) < 0))
				drawlinen(X1, X2, Y2, pr);
			if (RE > 1 && (PVAL < 0 || VAL < 0))
			{
				PARKN;
			}
			X1 = X2;
			X2 += IGAP;
			I++;
		}
		NEX;
	}
	setdef(pr);
}

void	drawmatrixpar(t_pr *pr)
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
			if (I == 0 && VAL == 0)
				drawlinez(X1, X2, Y2, pr);
			else if (I > 0 && ft_atoi(&TMP[I - 1][0]) == 0 && VAL == 0)
				drawlinez(X1, X2, Y2, pr);
			if (RE > 1 && PVAL == 0 && VAL == 0)
			{
				PARKZ;
			}
			X1 = X2;
			X2 += IGAP;
			I++;
		}
		NEX;
	}
	setdef(pr);
}

void	positiveparhori(t_pr *pr)
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
			if (VAL > 0 || (I > 0 && ft_atoi(&TMP[I - 1][0]) > 0))
				drawlinep(X1, X2, Y2, pr);
			if (RE > 1 && (PVAL > 0 || VAL > 0))
			{
				PARKP;
			}
			X1 = X2;
			X2 += IGAP;
			I++;
		}
		NEX;
	}
	setdef(pr);
}
