/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:01:06 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/10 11:16:17 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*c;
	t_list 	*p;

	c = lst;
	res = malloc(sizeof(t_list));
	if (!res)
	{
		return (NULL);
	}
	p = res;
	while (c != NULL)
	{
		p->content = f(c->content);
		p->next = malloc(sizeof(t_list));
		if (!p->next)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		p = p->next;
		c = c->next;
	}
	p->next = NULL;
	return (res);
}
