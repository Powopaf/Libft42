/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:47:28 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/10 10:53:53 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*c;
	t_list	*temp;

	c = *lst;
	while (c != NULL)
	{
		temp = c->next;
		del(c->content);
		free(c);
		c = temp;
	}
	*lst = NULL;
}
