/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:36:58 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 10:38:08 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
  Returns the current size of alst
*/
size_t	ft_arraylist_len(t_arraylist alst)
{
	return (alst->size);
}
