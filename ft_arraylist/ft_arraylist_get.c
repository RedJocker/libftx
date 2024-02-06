/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_get.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:38:55 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 10:39:11 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Returns the element of alst with index at
	if at is within the bounds.
	If at is out of bounds returns NULL.
	Do not call free on returned value,
	instead treat it as a borrowed value since
	alst will keep its ownership.
	If you need ownership of value make a clone.
*/
void	*ft_arraylist_get(t_arraylist alst, size_t at)
{
	if (at >= alst->size)
		return (NULL);
	return (alst->arr[at]);
}
