/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 01:59:56 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:59:59 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrealloc(void *ptr, size_t old_s, size_t new_s)
{
	void	*n_ptr;

	if (!ptr)
		return (ft_memalloc(new_s));
	if (!old_s)
	{
		ft_memdel(&ptr);
		return (ft_memalloc(new_s));
	}
	n_ptr = ft_memalloc(new_s);
	ft_memcpy(n_ptr, ptr, old_s);
	ft_memdel(ptr);
	return (n_ptr);
}
