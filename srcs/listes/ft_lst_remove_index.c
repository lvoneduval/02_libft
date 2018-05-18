/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:53:42 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:53:43 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_remove_index(t_list **alst, int index,
		void (*del)(void *, size_t))
{
	t_list		*cur;
	t_list		**prev;
	int			i;

	i = 0;
	if (!alst || index < 0)
		return ;
	prev = &(*alst);
	cur = *prev;
	while (cur->next && i < index)
	{
		cur = (*prev)->next;
		prev = &(*prev)->next;
		i++;
	}
	*prev = cur->next;
	cur->next = NULL;
	if (del)
		del(cur->content, cur->content_size);
	free(cur);
	cur = *prev;
}
