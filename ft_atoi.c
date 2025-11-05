/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:47:51 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/06 00:10:27 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t skip_whitespaces(const char *nptr)
{
	size_t	i;

	i = 0;
	while (nptr[i] != '\0' && ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' '))
	{
		i++;
	}
	return (i);
}

static int	sign(const char *nptr, size_t *i)
{
	if (nptr[*i] == '-')
	{
		*i = *i + 1;
		return (-1);
	}
	if (nptr[*i] == '+')
	{
		*i = *i + 1;
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		s;
	int		res;

	i = skip_whitespaces(nptr);
	s = sign(nptr, &i);
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * s);
}
