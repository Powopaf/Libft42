/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:48:40 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/05 22:51:07 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)(haystack));
	i = 0;
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == *needle)
		{
			j = 0;
			while (haystack[i + j] != '\0' && needle[j] != '\0'
				&& i + j < n && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return ((char *)(haystack + i));
			}
		}
		i++;
	}
	return (0);
}
