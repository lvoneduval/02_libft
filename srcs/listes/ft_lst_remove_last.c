/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:53:45 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:53:49 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_remove_last(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*cur;
	t_list		**prev;

	if (!alst)
		return ;
	prev = &(*alst);
	cur = *prev;
	while (cur->next)
	{
		cur = (*prev)->next;
		prev = &(*prev)->next;
	}
	*prev = cur->next;
	cur->next = NULL;
	del(cur->content, cur->content_size);
	free(cur);
	cur = *prev;
}
