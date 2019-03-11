/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:11:53 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 15:49:24 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	drawlinez(int x1, int x2, int y2, t_pr *pr)
{
	DS1;
	DS2;
	while (1)
	{
		if ((x1 >= 0 && x1 < 1280) && (pr->y1 >= 0 && pr->y1 < 720))
			pr->imgdata[pr->y1 * 1280 + x1] = pr->colorz;
		DC1;
		if (E2 > -DX)
		{
			ERR -= DY;
			x1 += SX;
		}
		if (E2 < DY)
		{
			ERR += DX;
			pr->y1 += SY;
		}
	}
}

void	drawlinep(int x1, int x2, int y2, t_pr *pr)
{
	DS1;
	DS2;
	while (1)
	{
		if ((x1 >= 0 && x1 < 1280) && (pr->y1 >= 0 && pr->y1 < 720))
			pr->imgdata[pr->y1 * 1280 + x1] = pr->colorp;
		DC1;
		if (E2 > -DX)
		{
			ERR -= DY;
			x1 += SX;
		}
		if (E2 < DY)
		{
			ERR += DX;
			pr->y1 += SY;
		}
	}
}

void	drawlinen(int x1, int x2, int y2, t_pr *pr)
{
	DS1;
	DS2;
	while (1)
	{
		if ((x1 >= 0 && x1 < 1280) && (pr->y1 >= 0 && pr->y1 < 720))
			pr->imgdata[pr->y1 * 1280 + x1] = pr->colorn;
		DC1;
		if (E2 > -DX)
		{
			ERR -= DY;
			x1 += SX;
		}
		if (E2 < DY)
		{
			ERR += DX;
			pr->y1 += SY;
		}
	}
}
