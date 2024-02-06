/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presenter_utils_bonus.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:03:50 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 09:25:55 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESENTER_UTILS_BONUS_H
# define PRESENTER_UTILS_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "ft_printf_internals_bonus.h"
# include "ft_memlib.h"
# include "ft_string.h"

# define XBASEL "0123456789abcdef0x"
# define XBASEU "0123456789ABCDEF0X"

// presenter_utils_bonus.c
int		base10_num_size(int nbr);

// presenter_utils2_bonus.c
char	*pointer_hex_num_string(
			unsigned long long n, char *xbase, t_format *fmt);
char	*hex_num_string(unsigned int n, char *xbase, t_format *fmt);

// presenter_utils3_bonus.c
int		pointer_size_outstr(int xlen, t_format *fmt);
void	fill_string(char *str, char filler, unsigned int size);
int		ubase10_num_size(unsigned int nbr, int precision);
int		ubase10_precision(t_format *fmt);

#endif
