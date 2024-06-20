/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:58:29 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/19 23:58:55 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashset_internal.h"

/*
  Returns the current size of hset
*/
size_t	ft_hashset_len(t_hashset hset)
{
	return (hset->size);
}
