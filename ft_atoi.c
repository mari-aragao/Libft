/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 00:31:20 by maragao           #+#    #+#             */
/*   Updated: 2022/05/17 01:04:59 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	isneg;

	i = 0;
	res = 0;
	isneg = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != 0 && (nptr[i] >= 48 && nptr[i] <= 57))
		res = (res * 10) + (nptr[i++] - 48);
	if (isneg == 1)
		res = -res;
	return (res);
}
