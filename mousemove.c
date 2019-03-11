/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mousemove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:09:57 by atabala           #+#    #+#             */
/*   Updated: 2019/01/29 15:11:28 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		mouse_press(int button, int x, int y, void *param)
{
	t_pr	*pr;

	pr = (t_pr *)param;
	pr->mousexpos = x;
	pr->mouseypos = y;
	if (button == 5 || button == 4)
	{
		mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
		if (button == 5)
		{
			if (IGAP >= 10)
				IGAP -= 5;
		}
		else if (button == 4)
			IGAP += 5;
		PROJRE;
		mlx_loop(pr->mlx_ptr);
	}
	if (button == 1)
		pr->mouseclick = 1;
	return (0);
}

int		mouse_release(int button, int x, int y, void *param)
{
	t_pr	*pr;

	pr = (t_pr *)param;
	pr->mousexpos = x;
	pr->mouseypos = y;
	if (button == 1)
		pr->mouseclick = 0;
	return (0);
}

int		mouse_move(int x, int y, void *param)
{
	t_pr	*pr;

	pr = (t_pr *)param;
	if (pr->mouseclick == 1)
	{
		mlx_clear_window(pr->mlx_ptr, pr->win_ptr);
		if (x < pr->mousexpos)
			pr->xstart -= pr->mousexpos - x;
		else if (x > pr->mousexpos)
			pr->xstart += x - pr->mousexpos;
		if (y < pr->mouseypos)
			pr->ystart -= pr->mouseypos - y;
		else if (y > pr->mouseypos)
			pr->ystart += y - pr->mouseypos;
		pr->mousexpos = x;
		pr->mouseypos = y;
		PROJRE;
		mlx_loop(pr->mlx_ptr);
	}
	return (0);
}
