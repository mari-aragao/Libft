/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:54:31 by maragao           #+#    #+#             */
/*   Updated: 2022/05/05 16:28:21 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*str;
	unsigned char	*temp;
	size_t			i;

	ptr = (unsigned char *) dst;
	str = (unsigned char *) src;
	temp = NULL;
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
