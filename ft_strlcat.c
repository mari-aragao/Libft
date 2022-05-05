/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 01:30:23 by maragao           #+#    #+#             */
/*   Updated: 2022/05/04 20:11:25 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	
	len_dst = 0;
	while (dst[len_dst])
		len_dst++;
	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dst + i < size - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = 0;
	return (len_src + len_dst);
}
