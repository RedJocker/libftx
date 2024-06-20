/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 23:52:15 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/20 02:17:42 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

int	ft_int_equal(int *a, int *b)
{
	return (a && b && *a == *b);
}

void	ft_int_print(int *i)
{
	if (i == NULL)
		ft_putstr("(nil)");
	else
		ft_putnbr_fd(*i, 1);
}
