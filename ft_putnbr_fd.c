/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:22:40 by maragao           #+#    #+#             */
/*   Updated: 2022/05/24 16:16:01 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	res;

	res = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd ("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * -1;
	}
	if (n > 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	res = n % 10 + '0';
	write (fd, &res, 1);
}
