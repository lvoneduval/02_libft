/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:53:20 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:53:22 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_pushend(t_list **alst, t_list *new)
{
	t_list		*addr;

	if (!new || !alst)
		return ;
	else if (!(*alst))
		*alst = new;
	else
	{
		addr = *alst;
		while (addr->next)
			addr = addr->next;
		addr->next = new;
	}
}
