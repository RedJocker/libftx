/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   presenter_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:03:49 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 09:15:59 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presenter_utils_bonus.h"

int	base10_num_size(int nbr)
{
	int	size;

	size = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
		nbr /= 10 + (0 * size++);
	return (size);
}
