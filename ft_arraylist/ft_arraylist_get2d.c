/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_get2d.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 22:15:34 by maurodri          #+#    #+#             */
/*   Updated: 2024/03/12 22:24:31 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

/*
	Assumes alst is a matrix, that is, a list of list.
  	Calls fun with each element of matrix.
	The fun should not be null.
	Not intended for mutation,
	use ft_arraylist_transform2d instead.
*/
void	*ft_arraylist_get2d(t_arraylist alst, size_t i, size_t j)
{
	t_arraylist	ilst;

	ilst = alst->arr[i];
	return (ilst->arr[j]);
}
