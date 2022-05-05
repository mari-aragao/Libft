/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 01:35:03 by maragao           #+#    #+#             */
/*   Updated: 2022/05/04 20:15:45 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	i = 0;
	if (size > 0)
	{
		while ((src[i]) && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = 0;
	return (len_src);
}
