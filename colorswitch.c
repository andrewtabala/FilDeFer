/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colorswitch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:53:13 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 14:54:03 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line/get_next_line.h"
#include "minilibx_macos/mlx.h"
#include "fdf.h"

void	zeroswitch(t_pr *pr)
{
	mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
	if (pr->zcount == 0)
		pr->colorz = 16777215;
	else if (pr->zcount == 1)
		pr->colorz = 12063767;
	else if (pr->zcount == 2)
		pr->colorz = 16421185;
	else if (pr->zcount == 3)
		pr->colorz = 15460136;
	else if (pr->zcount == 4)
		pr->colorz = 2665963;
	else if (pr->zcount == 5)
		pr->colorz = 2828523;
	else if (pr->zcount == 6)
		pr->colorz = 10889451;
	pr->zcount++;
	if (pr->zcount == 7)
		pr->zcount = 0;
	PROJRE;
	mlx_loop(pr->mlx_ptr);
}

void	posswitch(t_pr *pr)
{
	mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
	if (pr->pcount == 0)
		pr->colorp = 16777215;
	else if (pr->pcount == 1)
		pr->colorp = 12063767;
	else if (pr->pcount == 2)
		pr->colorp = 16421185;
	else if (pr->pcount == 3)
		pr->colorp = 15460136;
	else if (pr->pcount == 4)
		pr->colorp = 2665963;
	else if (pr->pcount == 5)
		pr->colorp = 2828523;
	else if (pr->pcount == 6)
		pr->colorp = 10889451;
	pr->pcount++;
	if (pr->pcount == 7)
		pr->pcount = 0;
	PROJRE;
	mlx_loop(pr->mlx_ptr);
}

void	negswitch(t_pr *pr)
{
	mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
	if (pr->ncount == 0)
		pr->colorn = 16777215;
	else if (pr->ncount == 1)
		pr->colorn = 12063767;
	else if (pr->ncount == 2)
		pr->colorn = 16421185;
	else if (pr->ncount == 3)
		pr->colorn = 15460136;
	else if (pr->ncount == 4)
		pr->colorn = 2665963;
	else if (pr->ncount == 5)
		pr->colorn = 2828523;
	else if (pr->ncount == 6)
		pr->colorn = 10889451;
	pr->ncount++;
	if (pr->ncount == 7)
		pr->ncount = 0;
	PROJRE;
	mlx_loop(pr->mlx_ptr);
}
