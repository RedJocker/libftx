/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_switch2d.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:25:29 by maurodri          #+#    #+#             */
/*   Updated: 2024/03/12 22:27:03 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"
#include "ft_arraylist_internal.h"

void	ft_arraylist_switch2d(
	t_arraylist alst, void *element, size_t row, size_t col)
{
	t_arraylist	ilst;

	if (row >= alst->size)
		return ;
	ilst = alst->arr[row];
	if (col >= ilst->size)
		return ;
	ilst->arr[col] = element;
}
