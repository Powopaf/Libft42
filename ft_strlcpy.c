/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:39:53 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/04 17:13:12 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int dsize)
{
	unsigned int	i;

	i = 0;
	if (dsize == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && i < dsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
