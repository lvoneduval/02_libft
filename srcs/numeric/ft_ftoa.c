/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:01:08 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:44:06 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_litoa_under0(long double value, short int prec,
							short int len_base, int is_up)
{
	static char	*base_str = "0123456789abcdefghijklmnopqrstuvwxyz";
	char		*str;
	short int	i;
	int			do_it;

	if (!(str = (char*)malloc(sizeof(char) * (prec + 1))))
		return (NULL);
	str[prec] = '\0';
	i = 0;
	do_it = prec > 15;
	while (prec-- != 0)
	{
		if (do_it && prec < 15)
		{
			value += 0.05 / ft_pow(len_base, prec);
			do_it = 0;
		}
		str[i++] = base_str[(int)(value * len_base)];
		value *= len_base;
		value = value - (long int)value;
	}
	if (is_up)
		str = ft_strtoupper(str);
	return (str);
}

char		*ft_ftoa(long double n, short prec)
{
	char		*str;

	prec = (prec < 0) ? 6 : prec;
	if (prec <= 15)
		n += 0.5 / ft_pow(10, prec);
	str = ft_litoa(n);
	if (!prec)
		return (str);
	str = ft_strjoinf(str, ".", 1);
	n = (n - (long int)n) * (n < 0 ? -1 : 1);
	str = ft_strjoinf(str, ft_litoa_under0(n, prec, 10, 0), 3);
	return (str);
}

char		*ft_ftoa_base(long double n, short prec, short base, int is_up)
{
	char		*str;

	if (base < 2 || base > 36)
		return (NULL);
	if (base == 10 || !n)
		return (ft_ftoa(n, prec));
	prec = (prec < 0) ? 6 : prec;
	if (prec <= 15)
		n += 0.0005 / ft_pow(base, prec);
	str = ft_litoa_base(n, base, is_up);
	if (!prec)
		return (str);
	str = ft_strjoinf(str, ".", 1);
	n = (n - (long int)n) * (n < 0 ? -1 : 1);
	str = ft_strjoinf(str, ft_litoa_under0(n, prec, base, is_up), 3);
	return (str);
}
