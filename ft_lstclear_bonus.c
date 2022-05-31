/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:17:13 by maragao           #+#    #+#             */
/*   Updated: 2022/05/31 12:58:00 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr2;

	ptr = *lst;
	while (ptr)
	{
		ptr2 = ptr -> next;
		(*del)(ptr -> content);
		free (ptr);
		ptr = ptr2;
	}
	*lst = NULL;
}
