/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:52:10 by maragao           #+#    #+#             */
/*   Updated: 2022/05/26 13:25:44 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *ptr;
	int i;

	ptr = lst;
	i = 0;
	while (ptr)
	{
		ptr = ptr -> next;
		i++;
	}
	while (--i, i > 0)
		lst = lst -> next;
	return (lst);
}
