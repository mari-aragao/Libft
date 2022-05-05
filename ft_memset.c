/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 00:26:25 by maragao           #+#    #+#             */
/*   Updated: 2022/05/05 01:00:40 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
		str[i++] = (unsigned char) c;
	return (s);
}
