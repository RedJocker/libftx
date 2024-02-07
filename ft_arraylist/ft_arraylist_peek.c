/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_peek.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:54:27 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 20:59:18 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
  Look at last element of alst without removing it.
  If alst is empty returns NULL.
  The alst will consider still being owner of returned
  value and thus you should not destroy it directly.
*/
void	*ft_arraylist_peek(t_arraylist alst)
{
	if (alst->size == 0)
		return (NULL);
	return (ft_arraylist_get(alst, alst->size - 1));
}
