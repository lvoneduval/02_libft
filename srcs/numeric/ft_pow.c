/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:01:36 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:01:39 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int		ft_pow(int nb, int power)
{
	int					cpt;
	long long int		value;

	cpt = 1;
	value = nb;
	if (power > 0)
		while (cpt++ < power)
			value = value * nb;
	else
	{
		if (power == 0)
			value = 1;
		else
			value = 0;
	}
	return (value);
}
