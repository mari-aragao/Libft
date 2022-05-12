/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:27:03 by maragao           #+#    #+#             */
/*   Updated: 2022/05/12 01:48:06 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (s[i] == (char) c)
		return ((char *) (s + i));
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *) (s + i));
		i--;
	}
	return (0);
}
