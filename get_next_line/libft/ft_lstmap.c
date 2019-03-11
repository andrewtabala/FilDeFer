/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 12:49:50 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 13:34:49 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*cell;

	if (lst == NULL)
		return (NULL);
	newlist = (t_list*)malloc(sizeof(lst));
	if (newlist == NULL)
		return (NULL);
	newlist = f(lst);
	cell = newlist;
	while (lst->next != '\0')
	{
		lst = lst->next;
		cell->next = f(lst);
		cell = cell->next;
	}
	return (newlist);
}
