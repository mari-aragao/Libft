/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:12:40 by maragao           #+#    #+#             */
/*   Updated: 2022/05/24 15:06:24 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_len_mat(char const *s, char c)
{
	size_t len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			len++;
		i++;
	}
	return (len);
}

unsigned int	ft_alloc(char **mat, char const *s, char c, size_t len_mat)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[j] && i < len_mat)
	{
		k = 0;
		while (s[j] == c && s[j])
			j++;
		while(s[j] != c && s[j])
		{
			k++;
			j++;
		}
		mat[i] = (char *)malloc(sizeof(*mat[i]) * (k + 1));
		if (!mat[i])
			return (1);
		i++;
	}
	mat[i] = NULL;
	return (0);
}

void	ft_name(char **mat, char const *s, char c, size_t len_mat)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (i < len_mat && s[j])
	{
		k = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
		{
			mat[i][k] = s[j];
			j++;
			k++;
		}
		mat[i][k] = '\0';
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char		*str;
	char		**mat;
	size_t		len_mat;
	char		c1[1];
	unsigned int	error;

	if (!s)
		return (NULL);
	c1[0] = c;
	if(!c1[0])
		c = 0;
	str = ft_strtrim(s, c1);
	if(!str)
		return (NULL);
	len_mat = ft_len_mat(str, c) + 1;
	mat = (char **)malloc(sizeof(*mat) * (len_mat + 1));
	if (!mat)
		return (NULL);
	error = ft_alloc(mat, s, c, len_mat);
	if (error == 1)
	{
		free (mat);
		return (NULL);
	}
	ft_name(mat, s, c, len_mat);
	return (mat);
}

