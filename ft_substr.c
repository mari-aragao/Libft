/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:36:08 by maragao           #+#    #+#             */
/*   Updated: 2022/05/17 02:15:26 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	ptr = (char *)malloc (len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy (ptr, (s + start), len);
	ptr[len] = 0;
	return (ptr);
}
