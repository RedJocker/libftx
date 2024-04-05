/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_add.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:39:49 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/29 18:06:20 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Adds element to the end of alst.
	If there are no errors returns alst with element added.
	If reallocation is needed and fails alst is destroyed and
	NULL is returned.
	To protect against errors you should always reassign
	the old alst value with the returned value and check for NULL.
	Transfers the ownership of element to alst.
	Do not call free on element since alst will consider
	being the owner of element after element was added.
*/
t_arraylist	ft_arraylist_add(t_arraylist alst, void *element)
{
	void	**temp;

	if (alst->capacity == alst->size)
	{
		temp = (void *) ft_realloc(
				alst->arr,
				alst->capacity * sizeof(void *),
				2 * alst->capacity * sizeof(void *));
		if (!temp)
		{
			ft_arraylist_destroy(alst);
			return (NULL);
		}
		alst->arr = temp;
		alst->capacity = 2 * alst->capacity;
	}
	alst->arr[alst->size] = element;
	alst->size++;
	return (alst);
}
