/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:01:32 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:01:34 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short int	ft_num_len_base(long int num, short int len_base)
{
	short int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= len_base;
		++len;
	}
	return (len);
}

short int	ft_unum_len_base(unsigned long int num, short int len_base)
{
	short int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= len_base;
		++len;
	}
	return (len);
}
