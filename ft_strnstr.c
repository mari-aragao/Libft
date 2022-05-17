/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 02:26:39 by maragao           #+#    #+#             */
/*   Updated: 2022/05/17 16:26:17 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 == 0)
		return ((char *)s1);
	i = 0;
	while (i < n && s1[i] != 0)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n)
		{
			j++;
			if (s2[j] == 0)
				return (((char *) s1) + i);
		}
		i++;
	}
	return (0);
}
