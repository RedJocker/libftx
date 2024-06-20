/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset_debug.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 02:07:47 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/20 02:24:44 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_hashset.h"
#include "ft_hashset_internal.h"
#include "ft_util.h"
#include "ft_stdio.h"

void	ft_hashset_debug(t_hashset hset, t_consumer printfun)
{
	size_t	i;

	i = 0;
	ft_putstr("[ ");
	while (i < hset->capacity)
	{
		printfun(hset->arr[i]);
		ft_putstr(" ");
		i++;
	}
	ft_putendl(" ]");
}
