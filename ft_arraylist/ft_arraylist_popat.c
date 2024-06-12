/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_popat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:38:03 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/12 20:29:53 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"
#include "ft_arraylist_internal.h"

/*
	Removes the element at index 'at', shifts left 
	all elements after at and return the element 
	that was removed.
	If 'at' is greater than last element index then
 	last element is poped.
	If 'at' is less than zero then first element is
	poped.
	If list is empty returns null.
	Element that is returned becomes owned by caller, 
	which will become responsible for freeing the element.
 */

void	*ft_arraylist_popat(t_arraylist alst, size_t at)
{
	size_t	len;
	void	*elem;
	size_t	i;

	len = ft_arraylist_len(alst);
	if (len == 0)
		return (NULL);
	if (at > len - 1)
		at = len - 1;
	else if (at < 0)
		at = 0;
	elem = ft_arraylist_get(alst, at);
	i = at - 1;
	while (++at < len - 2)
		alst->arr[at] = alst->arr[at + 1];
	alst->size--;
	return (elem);
}
