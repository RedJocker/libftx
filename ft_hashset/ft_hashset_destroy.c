/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:52:07 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/20 00:16:06 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashset_internal.h"

/*
	Destructor function for t_hashset.
  	Will free all elements of hset
	using destroy_element parameter
	passed on ft_hashset_new and then
	call free in itself.
	It is not recomended to call free
	directly on hset prefer using this function instead.
 */
void	ft_hashset_destroy(t_hashset hset)
{
	size_t	i;

	i = 0;
	while (i < hset->capacity)
	{
		if (hset->arr != NULL)
			hset->destroy_element(hset->arr[i]);
		i++;
	}
	if (hset->arr != NULL)
		free(hset->arr);
	free(hset);
}
