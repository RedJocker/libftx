/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_foreacharg.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 01:29:21 by maurodri          #+#    #+#             */
/*   Updated: 2024/04/02 01:31:01 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Calls fun with each element of alst together with arg.
	The fun should not be null.
	Not intended for mutation,
	use ft_arraylist_transformn instead.
*/
void	ft_arraylist_foreacharg(
	t_arraylist alst, void (*fun) (void *, void *), void *arg)
{
	size_t	i;

	i = 0;
	while (i < alst->size)
		fun(alst->arr[i++], arg);
}
