/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presenter_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:02:30 by maurodri          #+#    #+#             */
/*   Updated: 2024/08/22 17:15:10 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presenter_utils_bonus.h"
#include "presenter_bonus.h"

int	present_format(t_format *format, va_list *lst, t_stringbuilder *builder)
{
	if (format->conversion == STRING)
		return (present_string(format, lst, builder));
	else if (format->conversion == BASE_10)
		return (present_base10(format, lst, builder));
	else if (format->conversion == UBASE_10)
		return (present_ubase10(format, lst, builder));
	else if (format->conversion == CHAR)
		return (present_char(format, lst, builder));
	else if (format->conversion == ESCAPE)
		return (present_escape(format, lst, builder));
	else if (format->conversion == HEXA_LOWER)
		return (present_hexa(format, lst, XBASEL, builder));
	else if (format->conversion == HEXA_UPPER)
		return (present_hexa(format, lst, XBASEU, builder));
	else if (format->conversion == POINTER)
		return (present_pointer(format, lst, builder));
	return (-1);
}
