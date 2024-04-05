/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_foreach2d.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:46:47 by maurodri          #+#    #+#             */
/*   Updated: 2024/03/12 22:27:01 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Assumes alst is a matrix, that is, a list of list.
  	Calls fun with each element of matrix.
	The fun should not be null.
	Not intended for mutation,
	use ft_arraylist_transform2d instead.
*/
void	ft_arraylist_foreach2d(t_arraylist alst, void (*fun) (void *))
{
	size_t		i;
	size_t		j;
	t_arraylist	ilst;

	i = 0;
	while (i < alst->size)
	{
		ilst = alst->arr[i];
		j = 0;
		while (j < ilst->size)
		{
			fun(ilst->arr[j]);
			j++;
		}
		i++;
	}
}
