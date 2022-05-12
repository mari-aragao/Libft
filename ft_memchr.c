/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 02:00:22 by maragao           #+#    #+#             */
/*   Updated: 2022/05/12 02:06:05 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (str[i] != 0 && i < n)
	{
		if (str[i] == (unsigned char) c)
			return (*(s + i));
		i++;
	}
	return (0);
}
