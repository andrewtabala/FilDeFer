/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyactions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:54:14 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 14:59:03 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line/get_next_line.h"
#include "minilibx_macos/mlx.h"
#include "fdf.h"

void		alti(int key, t_pr *pr)
{
	mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
	if (key == 43)
	{
		Z -= 5;
		PROJRE;
	}
	else if (key == 47)
	{
		Z += 5;
		PROJRE;
	}
	mlx_loop(pr->mlx_ptr);
}

void		zoom(int key, t_pr *pr)
{
	mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
	if (key == 27)
	{
		if (IGAP >= 10)
			IGAP -= 5;
	}
	else if (key == 24)
		IGAP += 5;
	PROJRE;
	mlx_loop(pr->mlx_ptr);
}

void		move(int i, t_pr *pr)
{
	mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
	if (i == 123)
	{
		pr->xstart -= 10;
		PROJRE;
	}
	else if (i == 126)
	{
		pr->ystart -= 10;
		PROJRE;
	}
	else if (i == 124)
	{
		pr->xstart += 10;
		PROJRE;
	}
	else if (i == 125)
	{
		pr->ystart += 10;
		PROJRE;
	}
	mlx_loop(pr->mlx_ptr);
}

void		parswitch(t_pr *pr)
{
	mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
	mainpar(pr);
	mlx_loop(pr->mlx_ptr);
}

void		isoswitch(t_pr *pr)
{
	mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
	mainiso(pr);
	mlx_loop(pr->mlx_ptr);
}
