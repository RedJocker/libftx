/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:10:50 by maurodri          #+#    #+#             */
/*   Updated: 2024/08/22 17:39:13 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser_bonus.h"
#include "stringbuilder.h"

int	ft_printf(const char *str, ...)
{
	va_list			args;
	int				len;
	int				ret;
	t_stringbuilder	strbuilder;

	if (!str)
		return (-1);
	va_start(args, str);
	len = 0;
	ret = 0;
	strbuilder = stringbuilder_new();
	while (*str)
	{
		len += parse_non_format((char **)&str, &strbuilder);
		if (!*str)
			break ;
		ret = parse_format((char **)&str, &args, &strbuilder);
		if (ret < 0 || !strbuilder)
			return (-1);
		len += ret;
	}
	va_end(args);
	return (len);
}
