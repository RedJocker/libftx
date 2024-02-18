/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_destroy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:35:24 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/09 08:20:17 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Destructor function for t_arraylist.
  	Will free all elements of alst
	using destroy_element parameter
	passed on ft_arraylist_new and then
	call free in itself.
	It is not recomended to call free
	directly on alst prefer using this function instead.
 */
void	ft_arraylist_destroy(t_arraylist alst)
{
	size_t	i;

	i = 0;
	while (i < alst->size)
	{
		alst->destroy_element(alst->arr[i]);
		i++;
	}
	free(alst->arr);
	free(alst);
}
