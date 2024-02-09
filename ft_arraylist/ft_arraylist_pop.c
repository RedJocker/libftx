/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_pop.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:52:38 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/09 05:22:11 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
  Removes the last element of alst and return its value.
  If alst is empty returns NULL.
  The ownership of returned value is considered to be transfered
  to caller that will be responsible for destroying value returned.
  Use ft_arraylist_peek if you just want to look at last value
  without removing nor becoming owner of returned value.
 */
void	*ft_arraylist_pop(t_arraylist alst)
{
	if (alst->size == 0)
		return (NULL);
	return (ft_arraylist_get(alst, alst->size-- - 1));
}
