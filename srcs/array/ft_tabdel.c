/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:50:13 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:50:16 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(char ***mytab)
{
	char	**erase;
	int		i;

	if (!mytab || !*mytab)
		return ;
	erase = *mytab;
	i = 0;
	while (erase[i])
	{
		ft_strdel(&erase[i]);
		++i;
	}
	free(*mytab);
	*mytab = NULL;
}
