/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset_foreach.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:54:18 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/20 02:39:12 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashset_internal.h"

/*
	Calls fun with each element of hset.
	The fun should not be null.
	Not intended for mutation,
	use ft_hashset_transformn instead.
*/
void	ft_hashset_foreach(t_hashset hset, void (*fun) (void *))
{
	size_t	i;

	i = -1;
	while (++i < hset->capacity)
		if (hset->arr[i] != NULL)
			fun(hset->arr[i]);
}
