/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presenter_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:03:40 by maurodri          #+#    #+#             */
/*   Updated: 2024/08/22 17:22:06 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESENTER_BONUS_H
# define PRESENTER_BONUS_H

# include <stdarg.h>
# include "ft_printf_internals_bonus.h"

int	present_format(t_format *format, va_list *lst, t_stringbuilder *builder);
int	present_string(t_format *format, va_list *lst, t_stringbuilder *builder);
int	present_base10(t_format *format, va_list *lst, t_stringbuilder *builder);
int	present_ubase10(
		t_format *format, va_list *lst, t_stringbuilder *builder);
int	present_char(t_format *format, va_list *lst, t_stringbuilder *builder);
int	present_escape(t_format *format, va_list *lst, t_stringbuilder *builder);
int	present_hexa(
		t_format *format, va_list *lst, char *base, t_stringbuilder *builder);
int	present_pointer(t_format *format, va_list *lst, t_stringbuilder *builder);
#endif
