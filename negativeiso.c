/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negativeiso.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:24:13 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 16:24:47 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		hori1(t_pr *pr)
{
	K = Y1;
	if (ft_atoi(&TMP[I - 1][0]) == 0)
		drawlinen(X1, X2 + VAL - Z, Y2 - IGAP / 5, pr);
	else if (ft_atoi(&TMP[I - 1][0]) > 0)
	{
		Y1 += IGAP / 5;
		drawlinen(X1 + ft_atoi(&TMP[I - 1][0]) + Z,
				X2 + VAL - Z, Y2 - IGAP / 5, pr);
		Y1 = K;
	}
	if (TMP[I + 1] && ft_atoi(&TMP[I + 1][0]) == 0)
	{
		Y1 = Y2 - IGAP / 5;
		drawlinen(X2 + VAL - Z, X2 + IGAP - IGAP / 5, Y2 - IGAP / 5, pr);
		Y1 = K;
	}
}

static void		hori2(t_pr *pr)
{
	K = Y1;
	if (I > 0)
	{
		Y1 -= IGAP / 5;
		drawlinen(X1 + ft_atoi(&TMP[I - 1][0]) - Z,
				X2 + VAL - Z, Y2 - IGAP / 5, pr);
	}
	else
	{
		NHORI2;
	}
	Y1 = K;
	if (TMP[I + 1] && ft_atoi(&TMP[I + 1][0]) == 0)
	{
		Y1 = Y2 - IGAP / 5;
		drawlinen(X2 + VAL - Z, X2 + IGAP - IGAP / 5, Y2 - IGAP / 5, pr);
	}
	else if (TMP[I + 1] && ft_atoi(&TMP[I + 1][0]) > 0)
	{
		Y1 = Y2 - IGAP / 5;
		drawlinen(X2 + VAL - Z, X2 + IGAP - IGAP / 5 +
				ft_atoi(&TMP[I + 1][0]) + Z, Y2, pr);
	}
	Y1 = K;
}

static int		vert(t_pr *pr)
{
	K = Y1;
	if (PVAL == 0 && RE > 1)
	{
		NVERT1;
	}
	else if (RE <= 1)
	{
		NVERT2;
	}
	else if (PVAL > 0)
	{
		NVERT3;
	}
	else if (VAL > 0)
	{
		NVERT4;
	}
	else if (PVAL < 0 && VAL >= 0)
	{
		NVERT5;
	}
	else
		return (1);
	Y1 = K;
	return (0);
}

void			negativeisohori(t_pr *pr)
{
	START;
	while (pr->file[RE] != '\0')
	{
		TMP = pr->file[RE];
		RE++;
		while (TMP[I])
		{
			VAL = ft_atoi(&TMP[I][0]);
			if (RE > 1)
				PVAL = ft_atoi(&PTMP[I][0]);
			if (VAL < 0)
			{
				if (I > 0 && ft_atoi(&TMP[I - 1][0]) >= 0)
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

void			negativeisovert(t_pr *pr)
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
			if (VAL < 0 || (RE > 1 && PVAL < 0))
				if (vert(pr) == 1)
				{
					NVERT6;
				}
			NEXTNUM;
		}
		NEX;
	}
	setdef(pr);
}
