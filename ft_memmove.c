/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:31 by maragao           #+#    #+#             */
/*   Updated: 2022/05/19 13:04:04 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*str;
	size_t			i;

	if (!dst && !src && len > 0)
		return (NULL);
	ptr = (unsigned char *) dst;
	str = (unsigned char *) src;
	if (dst > src && dst < src + len)
	{
		while (len--)
			ptr[len] = str[len];
	}
	else
	{
		i = 0;
		while (len--)
		{
			ptr[i] = str[i];
			i++;
		}
	}
	return (dst);
}
