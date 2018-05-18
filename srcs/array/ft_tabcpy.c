/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:50:08 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:50:12 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabcpy(char **av)
{
	int		len;
	char	**tab;
	int		i;

	len = ft_tablen(av);
	if (!(tab = (char **)malloc(sizeof(char *) * len + 1)))
		return (NULL);
	i = -1;
	while (++i < len)
	{
		if (!(tab[i] = ft_strdup(av[i])))
		{
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}
	tab[i] = NULL;
	return (tab);
}
