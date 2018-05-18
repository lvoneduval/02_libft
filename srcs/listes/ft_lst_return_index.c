/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_return_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:53:51 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:53:53 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_return_index(t_list *lst, size_t index)
{
	size_t		i;

	i = 0;
	if (!lst)
		return (NULL);
	while (lst && i < index)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
