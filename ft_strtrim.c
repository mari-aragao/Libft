/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:45:01 by maragao           #+#    #+#             */
/*   Updated: 2022/05/18 16:33:05 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	first_trim(char const *s1, char const *set)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (set[i])
	{
		while (s1[j] == set[i])
		{
			j++;
			i = 0;
		}
		i++;
	}
	return (j);
}

size_t	last_trim(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	i = 0;
	j = (ft_strlen(s1) - 1);
	while (set[i])
	{
		while (s1[j] == set[i])
		{
			j--;
			i = 0;
		}
		i++;
	}
	j -= (size_t) first_trim(s1, set);
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ptr;

	ptr = ft_substr(s1, first_trim(s1, set), last_trim(s1, set));
	if (!ptr)
		return (NULL);
	return (ptr);
}
