/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 20:04:48 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:56:35 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*cur;

	new = NULL;
	if (!lst || f)
		return (lst);
	new = f(lst);
	cur = new;
	while (lst->next)
	{
		cur->next = f(lst->next);
		cur = cur->next;
		lst = lst->next;
	}
	return (new);
}
