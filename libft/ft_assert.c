/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 01:29:11 by maurodri          #+#    #+#             */
/*   Updated: 2024/09/04 01:31:25 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	ft_assert(int booll, char *msg)
{
	char	*mem;

	mem = 0;
	if (!booll)
	{
		ft_puterr("assertion failed: ");
		ft_puterrl(msg);
		(void) *mem;
		mem = (mem + 50 / *mem);
	}
}
