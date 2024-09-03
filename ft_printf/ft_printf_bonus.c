/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:10:50 by maurodri          #+#    #+#             */
/*   Updated: 2024/09/03 19:44:33 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memlib.h"
#include "parser_bonus.h"
#include "stringbuilder.h"
#include <stdlib.h>

static void	init(int *len, int *ret, t_stringbuilder *strbuilder)
{
	*len = 0;
	*ret = 0;
	*strbuilder = stringbuilder_new();
}

int	ft_vasprintf(char **outstr, const char *str, va_list args)
{
	int				len_ret[2];
	t_stringbuilder	strbuilder;
	char			**str_p;

	str_p = (char **) &str;
	if (!str)
		return (-1);
	init(&len_ret[0], &len_ret[1], &strbuilder);
	while (*str)
	{
		len_ret[0] += parse_non_format(str_p, &strbuilder);
		if (!*str)
			break ;
		len_ret[1] = parse_format(str_p, &args, &strbuilder);
		if (len_ret[1] < 0 || !strbuilder)
		{
			stringbuilder_destroy(strbuilder);
			return (-1);
		}
		len_ret[0] += len_ret[1];
	}
	*outstr = stringbuilder_build(strbuilder);
	if (!*outstr)
		return (-1);
	return (len_ret[0]);
}

int	ft_asprintf(char **outstr, const char *str, ...)
{
	va_list			args;
	int				len;

	va_start(args, str);
	*outstr = 0;
	len = ft_vasprintf(outstr, str, args);
	va_end(args);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	int				len;
	char			*outstr;

	va_start(args, str);
	outstr = 0;
	len = ft_vasprintf(&outstr, str, args);
	if (len > 0 && outstr)
		write(1, outstr, len);
	if (outstr)
		free(outstr);
	va_end(args);
	return (len);
}
