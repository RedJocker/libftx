/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_foreach.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:55:17 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/07 20:27:55 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Calls fun with each element of alst.
	The fun should not be null.
	Not intended for mutation,
	use ft_arraylist_transformn instead.
*/
void	ft_arraylist_foreach(t_arraylist alst, void (*fun) (void *))
{
	size_t	i;

	i = 0;
	while (i < alst->size)
		fun(alst->arr[i++]);
}
