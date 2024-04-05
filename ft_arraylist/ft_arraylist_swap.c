/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:34:39 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/18 18:44:53 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

void	ft_arraylist_swap(t_arraylist alst, size_t at1, size_t at2)
{
	void	*temp;

	if (at1 >= alst->size || at2 >= alst->size)
		return ;
	temp = alst->arr[at1];
	alst->arr[at1] = alst->arr[at2];
	alst->arr[at2] = temp;
}
