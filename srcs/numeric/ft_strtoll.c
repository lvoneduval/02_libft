/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 02:01:48 by lduval            #+#    #+#             */
/*   Updated: 2018/05/18 02:01:51 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int64_t			ft_strtoll(const char *string, char **endptr, uint8_t base)
{
	register const char		*p;
	int64_t					result;

	p = string;
	while (ft_isspace(*p))
		++p;
	if (*p == '-')
	{
		++p;
		result = -(ft_strtoull(p, endptr, base));
	}
	else
	{
		if (*p == '+')
		{
			++p;
		}
		result = ft_strtoull(p, endptr, base);
	}
	if ((result == 0) && (endptr != 0) && (*endptr == p))
		*endptr = (char *)string;
	return (result);
}
