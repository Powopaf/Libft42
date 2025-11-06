/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:27:41 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/06 11:28:36 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*res;

	if (nmemb != 0 && size > ((size_t)-1) / nmemb)
	{
		return (NULL);
	}
	res = malloc(nmemb * size);
	if (res == NULL)
	{
		return (res);
	}
	i = 0;
	while (i < nmemb * size)
	{
		((unsigned char *)res)[i] = 0;
		i++;
	}
	return (res);
}
