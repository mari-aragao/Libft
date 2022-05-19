/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:30:49 by maragao           #+#    #+#             */
/*   Updated: 2022/05/19 17:54:03 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		number_strings(const char *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i] != 0)
	{
		if (s[i] == c && s[i + 1] != c)
			res++;
		i++;
	}
	return (res + 1);
}

unsigned int	ft_allocstr(char **mat, const char *s, char c, int len_strs)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (i < len_strs && s[j] != 0)
	{
		len = 0;
		while (s[j] == c && s[j] != 0)
			j++;
		while (s[j] != 0 && s[j] != c)
		{
			len++;
			j++;
		}
		mat[i] = (char *) malloc(len + 1 * sizeof(*mat[i]));
		if (!mat[i])
			return (0);
		i++;
	}
	mat[i] = 0;
	return (1);
}

void	ft_namestr(char **mat, char *s, char c, int len_strs)
{
	int	i;
	int	j;
	int	k;

	(void)len_strs;
	i = 0;
	j = 0;
	while (i < 3 && s[j])
	{
		k = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
		{
			mat[i][k] = s[j];
			k++;
			j++;
		}
		mat[i][k] = 0;
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char			**mat;
	char			*str_trim;
	char			c1[1];
	int			len_strs;

	if (!s)
		return (NULL);
	c1[0] = c;
	str_trim = ft_strtrim(s, c1);
	if (!str_trim)
		return (NULL);
	len_strs = number_strings(str_trim, c);
	mat = (char **) malloc(len_strs + 1 * sizeof(*mat));
	if (!mat)
		return (NULL);
	ft_allocstr(mat, s, c, len_strs);
	ft_namestr(mat, (char *)s, c, len_strs);
	return (mat);
}

