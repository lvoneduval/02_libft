# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wescande <wescande@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/29 21:32:58 by wescande          #+#    #+#              #
#    Updated: 2018/05/18 02:34:40 by lduval           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror -g

SRC_DIR		=	srcs/
INC_DIR		=	includes/
OBJ_DIR		=	objs/

SRC_BASE	= \
listes/ft_lstadd.c\
listes/ft_lstrev.c\
listes/ft_lstsort.c\
listes/ft_lstswap.c\
listes/ft_lstnew.c\
listes/ft_lstdelone.c\
listes/ft_lstmap.c\
listes/ft_lstdel.c\
listes/ft_lstiter.c\
listes/ft_lstlen.c\
listes/ft_lst_cpy.c\
listes/ft_lstinsert_if_end.c\
listes/ft_lst_newstr.c\
listes/ft_lst_pushend.c\
listes/ft_lst_remove.c\
listes/ft_lst_remove_if.c\
listes/ft_lst_remove_index.c\
listes/ft_lst_remove_last.c\
listes/ft_lst_return_index.c\
get_next_line.c\
output/ft_putnbr_fd.c\
output/ft_putstr_fd.c\
output/ft_putstr.c\
output/ft_putchar.c\
output/ft_putnbr.c\
output/ft_putendl_fd.c\
output/ft_putchar_fd.c\
output/ft_putendl.c\
character/ft_isspace.c\
character/ft_islower.c\
character/ft_isdigit.c\
character/ft_isalnum.c\
character/ft_isprint.c\
character/ft_tolower.c\
character/ft_isblank.c\
character/ft_isalpha.c\
character/ft_isupper.c\
character/ft_toupper.c\
character/ft_isascii.c\
memory/ft_memcmp.c\
memory/ft_swapptr.c\
memory/ft_memmove.c\
memory/ft_memrealloc.c\
memory/ft_memset.c\
memory/ft_bzero.c\
memory/ft_memalloc.c\
memory/ft_memjoin.c\
memory/ft_memccpy.c\
memory/ft_memchr.c\
memory/ft_memcpy.c\
memory/ft_memdel.c\
string/ft_strtoupper.c\
string/ft_strjoin.c\
string/ft_strncat.c\
string/ft_strsplit.c\
string/ft_strisdigit.c\
string/ft_strclr.c\
string/ft_strdel.c\
string/ft_striter.c\
string/ft_strsub.c\
string/ft_strequ.c\
string/ft_strnequ.c\
string/ft_strcpy.c\
string/ft_strncpy.c\
string/ft_striteri.c\
string/ft_strlen.c\
string/ft_strtrim.c\
string/ft_strjoinf.c\
string/ft_strlcat.c\
string/ft_strmap.c\
string/ft_strstr.c\
string/ft_strdup.c\
string/ft_strchr.c\
string/ft_strisdecimal.c\
string/ft_strncmp.c\
string/ft_strrchr.c\
string/ft_strnew.c\
string/ft_strndup.c\
string/ft_strmapi.c\
string/ft_strcmp.c\
string/ft_strcat.c\
string/ft_strnstr.c\
string/ft_strisnumeral.c\
ft_printf/ft_putc.c\
ft_printf/ft_putnumber.c\
ft_printf/pars.c\
ft_printf/ft_printf.c\
ft_printf/ft_putstring.c\
ft_printf/ft_float.c\
numeric/ft_abs.c\
numeric/ft_max.c\
numeric/ft_ftoa.c\
numeric/ft_litoa.c\
numeric/ft_strtoll.c\
numeric/ft_num_len_base.c\
numeric/ft_atoui.c\
numeric/ft_itoa.c\
numeric/base_convert.c\
numeric/ft_min.c\
numeric/ft_atoi.c\
numeric/ft_strtoull.c\
numeric/ft_atolli_base.c\
numeric/ft_pow.c\
numeric/ft_intisbetween_inc.c\
numeric/ft_square.c\
array/ft_tablen.c\
array/ft_tabdel.c\
array/ft_tabcpy.c

SRCS		=	$(addprefix $(SRC_DIR), $(SRC_BASE))
OBJS		=	$(addprefix $(OBJ_DIR), $(SRC_BASE:.c=.o))
INDEX		=	0

SHELL := /bin/bash

all :
	make -j $(NAME)

$(NAME) :		$(OBJ_DIR) $(OBJS) Makefile
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(dir $(OBJS))

$(OBJ_DIR)%.o :	$(SRC_DIR)%.c Makefile | $(OBJ_DIR)
	@$(CC) $(FLAGS) -MMD -c $< -o $@\
		-I $(INC_DIR)

clean :
	@if [ -e $(OBJ_DIR) ]; \
	then \
		rm -rf $(OBJ_DIR); \
	fi;

fclean :		clean
	@if [ -e $(NAME) ]; \
	then \
		rm -rf $(NAME); \
	fi;

re :			fclean
	make -j $(NAME)

.PHONY :		fclean clean re

-include $(OBJS:.o=.d)
