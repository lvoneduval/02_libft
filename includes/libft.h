/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:11:02 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:29:40 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdint.h>
# define BUFF_SIZE 1024

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strisdigit(const char *str);
int					ft_strisdecimal(const char *str);
int					ft_strisnumeral(const char *str);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoinf(char *s1, char *s2, int state);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *big, const char *little,
							size_t len);
char				*ft_strndup(const char *s, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnstr(const char *big, const char *little,
							size_t len);
char				*ft_strrchr(const char *s, int c);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strtoupper(char *str);

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isblank(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				ft_tabdel(char ***mytab);
int					ft_tablen(char **mytab);
char				**ft_tabcpy(char **av);

int					get_next_line(const int fd, char **line);

/*
** OUTPUT :
*/
void				ft_putchar(int c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(int c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
** LIST :
*/
void				ft_lstadd(t_list **alst, t_list *lnew);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
int					ft_lstlen(t_list *lst);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstrev(t_list **lst);
t_list				*ft_lstswap(t_list *l_cur);
void				ft_lstsort(t_list **beg_list, int (*cmp)());
t_list				*ft_lst_cpy(t_list *lst, int r);
t_list				*ft_lst_newstr(char *str);
void				ft_lst_pushend(t_list **alst, t_list *new);
void				ft_lst_remove(t_list **alst, t_list *dl,
						void (*del)(void *, size_t));
void				ft_lst_remove_if(t_list **alst, int (*f)(t_list *elem),
						void (*del)(void *, size_t));
void				ft_lst_remove_index(t_list **alst, int index,
						void (*del)(void *, size_t));
void				ft_lst_remove_last(t_list **alst,
						void (*del)(void *, size_t));
t_list				*ft_lst_return_index(t_list *lst, size_t index);

/*
** MEM :
*/
void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memjoin(const void *mem1, const void *mem2,
						size_t len1, size_t len2);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memrealloc(void *ptr, size_t old_s, size_t new_s);
void				*ft_memset(void *s, int c, size_t n);
void				ft_swapptr(void **ptr1, void **ptr2);

/*
** NUM :
*/

long long int		ft_pow(int nb, int power);
long				ft_min(long n1, long n2);
long				ft_max(long n1, long n2);
short int			ft_num_len_base(long int num, short int len_base);
short int			ft_unum_len_base(unsigned long int num, short int len_base);
int					ft_intisbetween_inc(int value, int inf, int sup);
int					ft_square(int nb);
long int			ft_abs(long int num);
int					ft_atoi(const char *nptr);
unsigned int		ft_atoui(const char *nptr);
int64_t				ft_atolli_base(const char *nptr, uint8_t base);
uint64_t			base_convert(const uint8_t base, const char *p,
								uint8_t *overflow, uint8_t *anydigits);
uint64_t			ft_strtoull(const char *string, char **endptr,
								uint8_t base);
int64_t				ft_strtoll(const char *string, char **endptr, uint8_t base);
char				*ft_itoa(int n);
char				*ft_uitoa_nomalloc(unsigned int n, char *str);
char				*ft_itoa_nomalloc(int n, char *str);
char				*ft_litoa_nomalloc(long int n, char *str);
char				*ft_ftoa(long double n, short prec);
char				*ft_ftoa_base(long double n, short prec, short bas,
							int is_up);
char				*ft_litoa(long int n);
char				*ft_litoa_base(long int n, short int len_base, int is_maj);
char				*ft_ulitoa(unsigned long int n);
char				*ft_ulitoa_base(unsigned long int n, short int len_base,
						int is_maj);
/*
** PRINTF :
*/

int					ft_printf(char *str, ...);
#endif
