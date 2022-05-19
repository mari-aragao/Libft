/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:30:49 by maragao           #+#    #+#             */
/*   Updated: 2022/05/19 02:17:13 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		number_strings(const char *s, char c)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (s[0] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != 0)
			res++;
		i++;
	}
	return (res + 1);
}

int		ft_substrlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != 0 && s[len] != c)
		len++;
	return (len);
}

void	position_next_sep(const char *s, char c, int *i)
{
	while (s[*i] != 0 && s[*i] != c)
		i++;
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		num_strs;
	int		i;
	int		size;
	int		len_str;

	num_strs = number_strings(s, c);
	str = (char **) malloc(num_strs + 1 * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	len_str = 0;
	size = 0;
	while (size <= num_strs)
	{
		if (s[i] != c)
		{
			len_str = ft_substrlen(s, c);
			*(str + size) = (char *) malloc (len_str + 1);
			if (!*(str + size))
				return (NULL);
			*(str + size) = ft_substr(s, (unsigned int) i, len_str);
			position_next_sep(s, c, &i);
		}
		if (s[i] == c && (i == 0 || i == (int) ft_strlen(s)))
			size++;
		i++;
	}
	*(str + size) = 0;
	return (str);
}
