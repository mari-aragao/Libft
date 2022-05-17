/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:31 by maragao           #+#    #+#             */
/*   Updated: 2022/05/17 15:22:41 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*str;
	unsigned char	temp[sizeof(len)];
	size_t			i;

	ptr = (unsigned char *) dst;
	str = (unsigned char *) src;
	i = 0;
	while (i < len)
	{
		temp[i] = str[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = temp[i];
		i++;
	}
	return (dst);
}
