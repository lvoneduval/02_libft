/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 01:09:03 by lduval            #+#    #+#             */
/*   Updated: 2016/11/20 00:56:24 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	nb_char(const char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void		put_str(char *tab_char, const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		tab_char[i] = s[i];
		i++;
	}
	tab_char[i] = '\0';
}

static size_t	nb_words(char const *s, char c)
{
	size_t	nb_word;
	int		isword;

	nb_word = 0;
	isword = 0;
	while (*s)
	{
		if (isword)
		{
			if (*s == c)
				isword = 0;
		}
		else if (*s != c)
		{
			isword = 1;
			nb_word++;
		}
		s++;
	}
	return (nb_word);
}

static char		**tabfill(char const *s, char c, char **tab_str)
{
	char	**copytab_str;
	int		isword;
	size_t	tab_size;

	isword = 0;
	copytab_str = tab_str;
	while (*s)
	{
		if (*s != c)
		{
			if (!isword++)
			{
				tab_size = nb_char(s, c);
				if ((*tab_str = (char*)malloc(sizeof(char) * (tab_size + 1))))
				{
					put_str(*(tab_str++), s, c);
				}
			}
		}
		else if (isword)
			isword = 0;
		s++;
	}
	*tab_str = 0;
	return (copytab_str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab_str;
	size_t	nb_word;

	tab_str = NULL;
	nb_word = 0;
	if (!s)
		return (tab_str);
	nb_word = nb_words(s, c);
	if ((tab_str = (char **)malloc((nb_word + 1) * sizeof(char*))))
		tab_str = tabfill(s, c, tab_str);
	return (tab_str);
}
