/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:36:08 by maragao           #+#    #+#             */
/*   Updated: 2022/05/31 16:25:22 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	ptr = (char *)malloc (len + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy (ptr, (s + start), len);
	ptr[len] = 0;
	return (ptr);
}
