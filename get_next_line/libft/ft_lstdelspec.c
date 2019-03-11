/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelspec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:15:18 by atabala           #+#    #+#             */
/*   Updated: 2018/10/30 11:01:54 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelspec(t_list **lst, void *content)
{
	t_list *curr;
	t_list *prev;

	curr = *lst;
	prev = *lst;
	while (curr->content != content || curr->next != NULL)
		curr = curr->next;
	if (curr->content == content)
	{
		while (prev->next != curr)
			prev = prev->next;
		prev->next = curr->next;
		free(curr);
	}
}
