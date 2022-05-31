/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:24:44 by maragao           #+#    #+#             */
/*   Updated: 2022/05/30 17:31:33 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *) malloc (sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr -> content = content;
	ptr -> next = NULL;
	return (ptr);
}
