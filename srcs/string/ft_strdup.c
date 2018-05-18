/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:04:30 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:04:32 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_ret;
	size_t	len;

	len = ft_strlen(s);
	if (!(s_ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s_ret = ft_memcpy(s_ret, s, len + 1);
	return (s_ret);
}
