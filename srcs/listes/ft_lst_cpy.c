/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:53:05 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:53:11 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_cpy(t_list *lst, int r)
{
	t_list	*curs;
	t_list	*new;

	new = NULL;
	curs = lst;
	while (curs)
	{
		if (!r)
			ft_lst_pushend(&new, ft_lstnew(curs->content, curs->content_size));
		else
			ft_lstadd(&new, ft_lstnew(curs->content, curs->content_size));
		curs = curs->next;
	}
	return (new);
}
