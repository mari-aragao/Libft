/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:01:15 by maragao           #+#    #+#             */
/*   Updated: 2022/05/31 17:06:47 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (*lst == NULL || !*lst)
	{
		*lst = new;
		*lst->next = NULL;
	}
	else
	{
		ptr = ft_lstlast(*lst);
		ptr->next = new;
		new->next = NULL;
	}
}
