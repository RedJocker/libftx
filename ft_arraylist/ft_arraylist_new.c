/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_new.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:34:21 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/07 20:23:49 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Constructor function for t_arraylist.
	Receives as argument a function for
	destroying elements of t_arraylist
	that wiil be used when
	destroying t_arraylist 
 */
t_arraylist	ft_arraylist_new(void (*destroy_element)(void *element))
{
	t_arraylist	new_arraylist;

	if (!destroy_element)
		return (NULL);
	new_arraylist = malloc(sizeof(struct s_arraylist));
	if (!new_arraylist)
		return (NULL);
	new_arraylist->arr = malloc(DEFAULT_ARRAYLIST_SIZE * sizeof(void *));
	if (!new_arraylist->arr)
		return (ft_free_retnull(new_arraylist));
	new_arraylist->capacity = DEFAULT_ARRAYLIST_SIZE;
	new_arraylist->size = 0;
	new_arraylist->destroy_element = destroy_element;
	return (new_arraylist);
}
