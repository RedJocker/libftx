/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_transform.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:58:03 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 20:58:05 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
  	Call fun with each element of alst frees the old element
	and replaces with the return value of fun.
	The fun should not be null.
	If fun return type is the same as
	the type already on alst you may pass NULL for
	update_destroy_element, otherwise you will need
	to pass a valid update_destroy_element for the
	new type.
	For error control reasons returns the number
	of times fun returns NULL, and thus
	will return 0 if fun has never returned NULL. 
 */
int	ft_arraylist_transform(
	t_arraylist alst,
	void *(*fun)(void *),
	void (*update_destroy_element)(void *element))
{
	size_t	i;
	int		num_nulls_returned;
	void	*temp;

	num_nulls_returned = 0;
	i = 0;
	while (i < alst->size)
	{
		temp = fun(alst->arr[i]);
		if (temp == NULL)
			num_nulls_returned++;
		alst->destroy_element(alst->arr[i]);
		alst->arr[i] = temp;
		i++;
	}
	if (update_destroy_element != NULL)
		alst->destroy_element = update_destroy_element;
	return (num_nulls_returned);
}
