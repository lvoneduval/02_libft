/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:24:02 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:46:43 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	print_float(long double nb)
{
	char *s;
	char *cp;

	ft_putendl("");
	s = ft_ftoa(nb, g_arg.prec);
	cp = s;
	g_arg.length -= ft_strlen(s);
	if (g_arg.padc == ' ' && !g_arg.left)
		while (--(g_arg.length) >= 0)
			ft_putc(' ');
	if (g_arg.sign_char)
		ft_putc(g_arg.sign_char);
	if (g_arg.padc == '0' && !g_arg.left)
		while (--(g_arg.length) >= 0)
			ft_putc(g_arg.padc);
	while (*s)
	{
		ft_putc(*s);
		++s;
	}
	if (g_arg.left)
		while (--(g_arg.length) >= 0)
			ft_putc(' ');
	free(cp);
}

void	print_fsigned(va_list *ap)
{
	long double		n;
	long double		nb;

	nb = 0;
	n = 0;
	if (g_arg.nb_octet == sizeof(long long))
		n = va_arg(*ap, long double);
	else if (g_arg.nb_octet == sizeof(long))
		n = va_arg(*ap, double);
	else
		n = (float)va_arg(*ap, double);
	if (n >= 0)
	{
		g_arg.sign_char = g_arg.plus_sign;
		nb = n;
	}
	else if ((g_arg.sign_char = '-'))
		nb = -n;
	print_float(nb);
}
