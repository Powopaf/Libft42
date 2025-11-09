/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:29:52 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/09 14:54:06 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ulen(long n)
{
	size_t	len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	write_digits(char *res, size_t pos, long n)
{
	if (n == 0)
	{
		res[--pos] = '0';
		return ;
	}
	while (n > 0)
	{
		res[--pos] = '0' + n % 10;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	size_t	len;
	int		neg;

	neg = 0;
	num = (long)n;
	if (num < 0)
	{
		neg = 1;
		num = -num;
	}
	len = ulen(num);
	if (neg)
		len++;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	write_digits(res, len, num);
	if (neg)
		res[0] = '-';
	return (res);
}
