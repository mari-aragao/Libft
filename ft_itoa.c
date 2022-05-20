/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:46:10 by maragao           #+#    #+#             */
/*   Updated: 2022/05/20 13:49:41 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int	size_str(int n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		res++;
		n = n * (-1);
	}
	if (n == 0)
		res++;
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res + 1);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = size_str(n);
	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	ptr = (char *) malloc (len * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len - 1] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * (-1);
	}
	len -= 2;
	if (n == 0)
		ptr[0] = '0';
	while (len >= 0 && n > 0)
	{
		ptr[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (ptr);
}
