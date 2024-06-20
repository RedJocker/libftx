/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:47:46 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/19 21:38:17 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include <limits.h>

static void	parse_spaces(const char **str)
{
	while (ft_isspace(**str))
		(*str)++;
}

static int	parse_sign(const char **str)
{
	if (**str == '+')
	{
		(*str)++;
		return (0);
	}
	else if (**str == '-')
	{
		(*str)++;
		return (1);
	}
	else
		return (0);
}

static const char	*pointer_to_num_end(const char *str)
{
	while (ft_isdigit(*str))
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int			is_negative;
	const char	*num_end;
	int			result;

	parse_spaces(&str);
	is_negative = parse_sign(&str);
	num_end = pointer_to_num_end(str);
	result = 0;
	while (str != num_end)
	{
		result *= 10;
		result += (int)(*str - '0');
		str++;
	}
	if (is_negative)
		return (-result);
	return (result);
}

int	ft_atoi_strict(int *out_ok, const char *str)
{
	int			is_negative;
	const char	*num_end;
	long long	result;

	parse_spaces(&str);
	is_negative = parse_sign(&str);
	num_end = pointer_to_num_end(str);
	*out_ok = 0;
	result = 0;
	if (*num_end != '\0')
		return ((int) result);
	while (str != num_end)
	{
		result *= 10;
		result += (int)(*str - '0');
		str++;
	}
	if (is_negative)
		result = -result;
	if (result > INT_MAX || result < INT_MIN)
		return ((int) result);
	*out_ok = 1;
	return ((int) result);
}
