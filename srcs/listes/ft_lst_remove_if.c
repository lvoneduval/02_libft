/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:53:32 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:53:40 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lst_remove_if(t_list **alst, int (*f)(t_list *elem),
		void (*del)(void *, size_t))
{
	t_list		*cur;
	t_list		**prev;

	prev = &(*alst);
	cur = *prev;
	while (cur)
	{
		if (f(cur) == 1)
		{
			*prev = cur->next;
			cur->next = NULL;
			del ? del(cur->content, cur->content_size) : NULL;
			free(cur);
			cur = *prev;
		}
		else
		{
			cur = (*prev)->next;
			prev = &(*prev)->next;
		}
	}
}
