/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:53:24 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:53:29 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_remove(t_list **alst, t_list *dl, void (*del)(void *, size_t))
{
	t_list		*cur;
	t_list		**prev;

	prev = &(*alst);
	cur = *prev;
	while (cur)
	{
		if (cur == dl)
		{
			*prev = cur->next;
			cur->next = NULL;
			del(cur->content, cur->content_size);
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
