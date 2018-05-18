/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_newstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:53:13 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:53:18 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_newstr(char *str)
{
	t_list		*new;

	if (!str)
		return (NULL);
	new = ft_lstnew(str, ft_strlen(str) + 1);
	new->next = NULL;
	return (new);
}
