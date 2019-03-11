/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positiveiso.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:04:42 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 16:07:26 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		hori1(t_pr *pr)
{
	if (ft_atoi(&TMP[I - 1][0]) == 0)
		drawlinep(X1, X2 + VAL + Z, Y2 + IGAP / 5, pr);
	else if (ft_atoi(&TMP[I - 1][0]) < 0)
	{
		K = Y1;
		Y1 -= IGAP / 5;
		drawlinep(X1 + ft_atoi(&TMP[I - 1][0]) - Z,
				X2 + VAL + Z, Y2 + IGAP / 5, pr);
		Y1 = K;
	}
	if (TMP[I + 1] && ft_atoi(&TMP[I + 1][0]) == 0)
	{
		K = Y1;
		Y1 = Y2 + IGAP / 5;
		drawlinep(X2 + VAL + Z,
				X2 + IGAP - IGAP / 5, Y2 - IGAP / 5, pr);
		Y1 = K;
	}
}

static void		hori2(t_pr *pr)
{
	K = Y1;
	if (I > 0)
	{
		Y1 += IGAP / 5;
		drawlinep(X1 + ft_atoi(&TMP[I - 1][0]) + Z,
				X2 + VAL + Z, Y2 + IGAP / 5, pr);
	}
	else
	{
		PHORI2;
	}
	Y1 = K;
	if (TMP[I + 1] && ft_atoi(&TMP[I + 1][0]) == 0)
	{
		Y1 = Y2 + IGAP / 5;
		drawlinep(X2 + VAL + Z,
				X2 + IGAP - IGAP / 5, Y2 - IGAP / 5, pr);
	}
	else if (TMP[I + 1] && ft_atoi(&TMP[I + 1][0]) < 0)
	{
		Y1 = Y2 + IGAP / 5;
		drawlinep(X2 + VAL + Z, X2 + IGAP - IGAP / 5 +
				ft_atoi(&TMP[I + 1][0]) - Z, Y2 - IGAP / 5 * 2, pr);
	}
	Y1 = K;
}

static int		vert(t_pr *pr)
{
	K = Y1;
	if (PVAL == 0 && RE > 1)
	{
		PVERT1;
	}
	else if (RE <= 1)
	{
		PVERT2;
	}
	else if (VAL < 0)
	{
		PVERT3;
	}
	else if (PVAL < 0)
	{
		PVERT4;
	}
	else if (PVAL > 0 && VAL <= 0)
	{
		PVERT5;
	}
	else
		return (1);
	Y1 = K;
	return (0);
}

void			positiveisohori(t_pr *pr)
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
			if (VAL > 0)
			{
				if (I > 0 && ft_atoi(&TMP[I - 1][0]) <= 0)
					hori1(pr);
				else
					hori2(pr);
			}
			NEXTNUM;
		}
		NEX;
	}
	setdef(pr);
}

void			positiveisovert(t_pr *pr)
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
			if (VAL > 0 || (RE > 1 && PVAL > 0))
				if (vert(pr) == 1)
				{
					PVERT6;
				}
			NEXTNUM;
		}
		NEX;
	}
	setdef(pr);
}
