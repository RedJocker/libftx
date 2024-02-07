/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_addat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:48:10 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 20:56:51 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Adds element to alst at index at.
	If at is bigger than size the element is just
	added after last element.
	Consider that adding to front of alst is expensive
	since elements have to be shifted to open space for new element.
	If reallocation is needed and fails alst is destroyed and
	NULL is returned.
  	To protect against errors you should always reassign
	the old alst value with the returned value and check for NULL.
  	Transfers the ownership of element to alst.
	Do not call free on element since alst will consider
	being the owner of element after element was added.
 */
t_arraylist	ft_arraylist_addat(t_arraylist alst, void *element, size_t at)
{
	void	*last;
	size_t	i;

	if (at >= alst->size)
		return (ft_arraylist_add(alst, element));
	last = ft_arraylist_get(alst, alst->size - 1);
	i = alst->size - 1;
	while (i > at)
	{
		alst->arr[i] = alst->arr[i - 1];
		i--;
	}
	alst->arr[at] = element;
	return (ft_arraylist_add(alst, last));
}
