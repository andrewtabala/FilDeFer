/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainiso.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:01:03 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 15:09:39 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line/get_next_line.h"
#include "minilibx_macos/mlx.h"
#include "fdf.h"
#include <stdio.h>

void	readfile(t_pr *pr)
{
	int i;
	int k;

	pr->zcount = 0;
	pr->pcount = 0;
	pr->ncount = 0;
	pr->colorz = 15261759;
	pr->colorp = 4181224;
	pr->colorn = 13385704;
	pr->isogap = 50;
	pr->mouseclick = 0;
	pr->z = 0;
	i = 0;
	k = 0;
	pr->file = (char ***)malloc(4096 * sizeof(char**));
	while (get_next_line(pr->fd, &LINE) > 0)
	{
		pr->file[i] = ft_strsplit(LINE, ' ');
		k = 0;
		i++;
		free(LINE);
	}
	pr->file[i] = NULL;
}

void	mainiso(t_pr *pr)
{
	ft_bzero(pr->imgdata, sizeof(int) * 1280 * 720);
	setdef(pr);
	negativeisohori(pr);
	negativeisovert(pr);
	drawmatrixiso(pr);
	positiveisohori(pr);
	positiveisovert(pr);
	mlx_put_image_to_window(pr->mlx_ptr, pr->win_ptr,
		pr->img_ptr, 0, 0);
	controlsmenu(pr);
	pr->proj = 1;
}
