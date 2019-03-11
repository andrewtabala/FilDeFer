/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 07:29:17 by atabala           #+#    #+#             */
/*   Updated: 2018/10/30 07:54:48 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddlast(t_list **lst, void *content, size_t content_size)
{
	t_list *curr;

	curr = *lst;
	if (content == NULL)
		content_size = 0;
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = malloc(content_size);
		curr->next->content = content;
		curr->next->next = NULL;
	}
}
