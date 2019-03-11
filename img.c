/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:52:00 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 14:52:36 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line/get_next_line.h"
#include "minilibx_macos/mlx.h"
#include "fdf.h"

void	img(t_pr *pr)
{
	int		bpp;
	int		sl;
	int		e;

	pr->img_ptr = mlx_new_image(pr->mlx_ptr, 1280, 720);
	pr->imgdata = (int*)mlx_get_data_addr(pr->img_ptr, &bpp, &sl, &e);
}
