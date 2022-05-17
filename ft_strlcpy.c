/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 01:35:03 by maragao           #+#    #+#             */
/*   Updated: 2022/05/17 16:17:27 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	i = 0;
	if (dstsize == 0)
		return (len_src);
	if (dstsize > 0)
	{
		while ((src[i]) && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = 0;
	return (len_src);
}
