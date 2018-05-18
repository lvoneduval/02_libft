/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:59:52 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:59:54 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memjoin(const void *mem1, const void *mem2,
					size_t len1, size_t len2)
{
	void	*ret;

	if (!(ret = (void *)malloc(sizeof(void) * (len1 + len2))))
		return (NULL);
	ft_memcpy(ret, mem1, len1);
	ft_memcpy(ret + len1, mem2, len2);
	return (ret);
}
