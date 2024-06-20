/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:59:06 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/20 00:22:03 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashset_internal.h"
#include "ft_memlib.h"

/*
	Constructor function for t_hashset.
	Receives as argument:
	- hash_fun, a function that returns
	a hash number for an element
	- elem_equal, a function that compares
	elements equality that returns 0 only if not equal
	- destroy_element, a function for
	destroying elements of t_hashset
	that will be used when
	destroying t_hashset
 */
t_hashset	ft_hashset_new(
	size_t	(*hash_fun)(void *element),
	int		(*elem_equal)(void *ele1, void *ele2),
	void	(*destroy_element)(void *element))
{
	t_hashset	new_hashset;

	if (!destroy_element || !elem_equal || !hash_fun)
		return (NULL);
	new_hashset = malloc(sizeof(struct s_hashset));
	if (!new_hashset)
		return (NULL);
	new_hashset->arr = (
		ft_calloc(DEFAULT_HASHSET_SIZE,  sizeof(void *)));
	if (!new_hashset->arr)
		return (ft_free_retnull(new_hashset));
	new_hashset->capacity = DEFAULT_HASHSET_SIZE;
	new_hashset->size = 0;
	new_hashset->destroy_element = destroy_element;
	new_hashset->elem_equal = elem_equal;
	new_hashset->hash_fun = hash_fun;
	return (new_hashset);
}
