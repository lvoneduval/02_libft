/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:54:19 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:58:04 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsort(t_list **beg_list, int (*cmp)())
{
	t_list	*prev;
	t_list	*tmp;
	int		no_end;

	no_end = 1;
	while (no_end)
	{
		no_end = 0;
		prev = NULL;
		tmp = *beg_list;
		while (tmp && tmp->next)
			if ((*cmp)(tmp->content, tmp->next->content) > 0 && no_end++)
			{
				(prev) ? prev->next = tmp->next : 0;
				(!prev) ? *beg_list = tmp->next : 0;
				prev = ft_lstswap(tmp);
			}
			else
			{
				prev = tmp;
				tmp = tmp->next;
			}
	}
}
