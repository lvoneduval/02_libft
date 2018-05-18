/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:54:17 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:57:31 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrev(t_list **lst)
{
	t_list	*prev;
	t_list	*tmp;
	t_list	*next;

	prev = NULL;
	if (!lst)
		return (NULL);
	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = next;
	}
	*lst = prev;
	return (prev);
}
