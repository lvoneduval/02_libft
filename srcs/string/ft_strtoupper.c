/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:04:49 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:04:53 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *str)
{
	char	*s;

	if (!str)
		return (NULL);
	s = str;
	while (*str)
	{
		*str = ft_toupper(*str);
		++str;
	}
	return (s);
}
