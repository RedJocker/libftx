/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:10:15 by maurodri          #+#    #+#             */
/*   Updated: 2024/08/22 17:07:30 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_BONUS_H
# define PARSER_BONUS_H

# include <stdarg.h>
# include <unistd.h>
# include "ft_printf_internals_bonus.h"

// parser.c
int	parse_format(char **str_ptr, va_list *lst, t_stringbuilder *strbuilder);
int	parse_non_format(char **str_ptr, t_stringbuilder *strbuilder);

// parse_format_args.c
int	parse_initial(t_format *format, char **str_ptr);
int	parse_flags(t_format *format, char **str_ptr);
int	parse_width(t_format *format, char **str_ptr);
int	parse_precision(t_format *format, char **str_ptr);
int	parse_convertion(t_format *format, char **str_ptr);

#endif
