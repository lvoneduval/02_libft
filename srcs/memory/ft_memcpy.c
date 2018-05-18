/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:23:43 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 01:59:46 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	*lptr1;
	unsigned long	*lptr2;
	unsigned char	*cptr1;
	unsigned char	*cptr2;

	lptr1 = (unsigned long*)dest;
	lptr2 = (unsigned long*)src;
	while (n >= sizeof(unsigned long))
	{
		*(lptr1++) = *(lptr2++);
		n -= sizeof(unsigned long);
	}
	cptr1 = (unsigned char*)lptr1;
	cptr2 = (unsigned char*)lptr2;
	while (n--)
		*(cptr1++) = *(cptr2++);
	return (dest);
}
