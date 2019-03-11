/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainpar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:59:31 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 15:00:31 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line/get_next_line.h"
#include "minilibx_macos/mlx.h"
#include "fdf.h"

void	setdef(t_pr *pr)
{
	pr->i = 0;
	pr->recounter = 0;
}

void	mainpar(t_pr *pr)
{
	ft_bzero(pr->imgdata, sizeof(int) * 1280 * 720);
	setdef(pr);
	negativeparhori(pr);
	drawmatrixpar(pr);
	positiveparhori(pr);
	mlx_put_image_to_window(pr->mlx_ptr, pr->win_ptr,
		pr->img_ptr, 0, 0);
	controlsmenu(pr);
	pr->proj = 2;
}
