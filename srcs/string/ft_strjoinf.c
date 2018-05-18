/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:04:46 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:04:48 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinf(char *s1, char *s2, int state)
{
	char	*ans;

	ans = ft_strjoin((const char *)s1, (const char *)s2);
	if (state == 1 || state == 3)
		ft_strdel(&s1);
	if (state == 2 || state == 3)
		ft_strdel(&s2);
	return (ans);
}
