/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_replace2d.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 20:50:06 by maurodri          #+#    #+#             */
/*   Updated: 2024/03/12 22:26:00 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"
#include "ft_arraylist_internal.h"

void	ft_arraylist_replace2d(
	t_arraylist alst, void *element, size_t row, size_t col)
{
	t_arraylist	ilst;

	if (row >= alst->size)
		return ;
	ilst = alst->arr[row];
	if (col >= ilst->size)
		return ;
	ilst->destroy_element(ilst->arr[col]);
	ilst->arr[col] = element;
}
