/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 01:33:42 by maragao           #+#    #+#             */
/*   Updated: 2022/05/05 02:17:04 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*str;
	size_t		i;

	ptr = (unsigned char *) dest;
	str = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (dest);
}
