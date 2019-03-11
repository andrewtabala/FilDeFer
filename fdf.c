/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:02:07 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 15:55:03 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	controlsmenu(t_pr *pr)
{
	void	*wm;
	void	*mp;
	int		y;
	int		col;

	y = 0;
	col = 12626380;
	mp = pr->mlx_ptr;
	wm = pr->win_ptr;
	mlx_string_put(mp, wm, 60, y += 5, col, "Controls");
	mlx_string_put(mp, wm, 10, y += 65, col,
			"Move: Key Arrows/Hold LMB and move");
	mlx_string_put(mp, wm, 10, y += 50, col, "Zoom: +/- or scroll");
	mlx_string_put(mp, wm, 10, y += 50, col, "Change Altitude: </>");
	mlx_string_put(mp, wm, 10, y += 50, col, "Change color for NEGATIVE Z: 1");
	mlx_string_put(mp, wm, 10, y += 50, col, "Change color for ZERO 	Z: 2");
	mlx_string_put(mp, wm, 10, y += 50, col, "Change color for POSITIVE Z: 3");
	mlx_string_put(mp, wm, 10, y += 50, col, "Isometric projection: I");
	mlx_string_put(mp, wm, 10, y += 50, col, "Parallel projection: P");
	mlx_string_put(mp, wm, 10, y += 50, col, "Exit: esc");
}

int		key_press(int key, void *param)
{
	t_pr	*pr;

	pr = (t_pr *)param;
	if (key == 53)
	{
		system("leaks fdf");
		exit(0);
	}
	if (key == 35)
		parswitch(pr);
	if (key == 34)
		isoswitch(pr);
	if (key == 123 || key == 126 || key == 124 || key == 125)
		move(key, pr);
	if (key == 18 || key == 83)
		negswitch(pr);
	if (key == 19 || key == 84)
		zeroswitch(pr);
	if (key == 20 || key == 85)
		posswitch(pr);
	if (key == 27 || key == 24 || key == 5 || key == 4)
		zoom(key, pr);
	if (key == 43 || key == 47)
		alti(key, pr);
	return (0);
}

void	setup_controls(t_pr *pr)
{
	mlx_hook(pr->win_ptr, 2, 0, key_press, pr);
	mlx_hook(pr->win_ptr, 4, 0, mouse_press, pr);
	mlx_hook(pr->win_ptr, 5, 0, mouse_release, pr);
	mlx_hook(pr->win_ptr, 6, 0, mouse_move, pr);
}

int		main(int argc, char **argv)
{
	t_pr	pr;

	if (argc == 2)
	{
		pr.mlx_ptr = mlx_init();
		pr.win_ptr = mlx_new_window(pr.mlx_ptr, 1280, 720, "Fil de Fer");
		pr.argv = argv[1];
		pr.fd = open(argv[1], O_RDONLY);
		pr.prevfd = open(argv[1], O_RDONLY);
		pr.xstart = 320;
		pr.ystart = 200;
		img(&pr);
		setup_controls(&pr);
		readfile(&pr);
		mainiso(&pr);
		mlx_loop(pr.mlx_ptr);
		free(pr.file);
	}
	system("leaks fdf");
}
