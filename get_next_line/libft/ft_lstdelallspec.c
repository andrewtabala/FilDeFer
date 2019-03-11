/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelallspec.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:24:40 by atabala           #+#    #+#             */
/*   Updated: 2018/10/30 11:00:20 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelallspec(t_list **lst, void *content)
{
	t_list *curr;
	t_list *todel;
	t_list *prev;

	curr = *lst;
	prev = *lst;
	while (curr->next != NULL)
	{
		if (curr->content == content)
		{
			while (prev->next != curr)
				prev = prev->next;
			prev->next = curr->next;
			todel = curr;
			free(todel);
		}
		curr = curr->next;
	}
}
