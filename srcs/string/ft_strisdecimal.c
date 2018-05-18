/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdecimal.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:04:34 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:05:21 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strisnumeral(const char *str)
{
	int dot;

	dot = 0;
	if (!str || !*str)
		return (0);
	if (*str == '+' || *str == '-')
		++str;
	while (*str)
	{
		if (*str == '.')
		{
			if (dot)
				return (0);
			++dot;
		}
		else if (!ft_isdigit(*str))
			return (0);
		++str;
	}
	return (1);
}
