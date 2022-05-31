/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:53:49 by maragao           #+#    #+#             */
/*   Updated: 2022/05/30 15:46:42 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
			ft_lstclear(&new, del);
		ft_lstadd_back(&new, node);
		node->next = NULL;
		lst = lst->next;
	}
	return (new);
}
