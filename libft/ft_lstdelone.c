/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 12:00:45 by atabala           #+#    #+#             */
/*   Updated: 2018/10/29 16:32:30 by atabala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*kostil;

	kostil = *alst;
	del(kostil->content, kostil->content_size);
	free(kostil);
	*alst = NULL;
}
