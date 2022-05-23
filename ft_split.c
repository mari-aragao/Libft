/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:12:40 by maragao           #+#    #+#             */
/*   Updated: 2022/05/23 18:26:07 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len_mat(char const *s, char c)
{
	size_t len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			len++;
		i++;
	}
	return (len + 1);
}

unsigned int	ft_alloc(char **mat, char const *s, char c, size_t len_mat)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i] && j < len_mat)
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		while(s[i] != c && s[i])
		{
			len++;
			i++;
		}
		mat[j] = (char *) malloc(len + 1 * sizeof(char));
		if (!mat[j])
			return (1);
		j++;
	}
	return (0);
}

void	ft_name(char **mat, char *s, char c, size_t len_mat)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] && j < len_mat)
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			mat[j][k] = s[i];
			i++;
			k++;
		}
		mat[j][k] = '\0';
		j++;
	}
//	mat[j][0] = 0;
}

char	**ft_split(char const *s, char c)
{
	char **mat;
	size_t	len_mat;
	char	c1[1];
	unsigned int	error;

	len_mat = 0;
	c1[0] = c;
	len_mat = (ft_len_mat(ft_strtrim(s, c1), c));
	mat = (char **) malloc (len_mat + 1);
	if (!mat)
		return (NULL);
	error = ft_alloc(mat, s, c, len_mat);
	if (error == 1)
	{
		free (mat);
		return (NULL);
	}
	ft_name(mat, (char *)s, c, len_mat);
	return (mat);
}
