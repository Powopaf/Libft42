/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:29:52 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/08 15:44:33 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char	*res;
	long	num;
	long	x;
	size_t	i;
	int		s;

	s = 0;
	num = (long)n;
	if (n < 0)
	{
		s = 1;
		num = -num;
	}
	i = 1;
	x = num;
	while (x >= 10)
	{
		x /= 10;
		i++;
	}
	if (s && num != 0)
		i++;
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	res[i] = '\0';
	if (num == 0)
		res[--i] = '0';
	while (num > 0)
	{
		res[--i] = '0' + num % 10;
		num /= 10;
	}
	if (s && n != 0)
		res[0] = '-';
	return (res);
}
