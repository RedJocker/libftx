/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:10:50 by maurodri          #+#    #+#             */
/*   Updated: 2024/08/22 20:30:58 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memlib.h"
#include "parser_bonus.h"
#include "stringbuilder.h"
#include <stdlib.h>

static void	init(int *len, int *ret, char **out, t_stringbuilder *strbuilder)
{
	*len = 0;
	*ret = 0;
	*strbuilder = stringbuilder_new();
	*out = 0;
}

static int	destroy(int exit_code, char *out, t_stringbuilder strbuilder)
{
	if (strbuilder)
		stringbuilder_destroy(strbuilder);
	if (out)
		free(out);
	return (exit_code);
}

int	ft_vsprintf(char **outstr, const char *str, va_list args)
{
	int				len_ret[2];
	t_stringbuilder	strbuilder;
	char			*out;

	if (!str)
		return (-1);
	init(&len_ret[0], &len_ret[1], &out, &strbuilder);
	while (*str)
	{
		len_ret[0] += parse_non_format((char **)&str, &strbuilder);
		if (!*str)
			break ;
		len_ret[1] = parse_format((char **)&str, &args, &strbuilder);
		if (len_ret[1] < 0 || !strbuilder)
			return (destroy(-1, out, strbuilder));
		len_ret[0] += len_ret[1];
	}
	out = stringbuilder_build(strbuilder);
	strbuilder = 0;
	if (!out)
		return (destroy(-1, out, strbuilder));
	if (!*outstr)
		*outstr = malloc(len_ret[0] * sizeof(char));
	ft_memcpy(*outstr, out, len_ret[0]);
	return (destroy(len_ret[0], out, strbuilder));
}

int	ft_sprintf(char **outstr, const char *str, ...)
{
	va_list			args;
	int				len;

	va_start(args, str);
	outstr = 0;
	len = ft_vsprintf(outstr, str, args);
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
	len = ft_vsprintf(&outstr, str, args);
	if (len > 0 && outstr)
		write(1, outstr, len);
	if (outstr)
		free(outstr);
	va_end(args);
	return (len);
}
