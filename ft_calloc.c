/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:12:01 by maragao           #+#    #+#             */
/*   Updated: 2022/05/31 16:11:06 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	tot_size;

	tot_size = nmemb * size;
	ptr = (void *) malloc (tot_size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, tot_size);
	return (ptr);
}
