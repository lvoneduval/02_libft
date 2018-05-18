/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:54:22 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:58:27 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstswap(t_list *l_cur)
{
	t_list	*l_next;

	l_next = l_cur;
	if (l_cur && l_cur->next)
	{
		l_next = l_cur->next;
		l_cur->next = l_next->next;
		l_next->next = l_cur;
	}
	return (l_next);
}
