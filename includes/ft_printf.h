/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 18:21:32 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:30:57 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <wchar.h>
# include "libft.h"
# define BUFF_SIZE 1024

int						nboc(unsigned int nbr);
char					*putwr(int n, wchar_t ch);
int						g_nb;
char					g_buff[BUFF_SIZE];
int						print_char(va_list *ap);
int						print_string(va_list *ap);
void					print_unsigned(va_list *ap);
void					print_signed(va_list *ap);
void					printnum(unsigned long long nb);
int						ft_putc(char c);
void					print_fsigned(va_list *ap);

typedef struct			s_arg
{
	int					nb_octet;
	int					base;
	int					length;
	int					prec;
	int					left;
	char				padc;
	int					plus_sign;
	int					sign_char;
	int					conv;
	int					cap;
	unsigned long long	n;
}						t_arg;

t_arg					g_arg;
int						pars(char **str);
int						ft_printf(char *str, ...);
void					print_string3(char c);
#endif
