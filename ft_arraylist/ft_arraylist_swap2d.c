/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_swap2d.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:37:40 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/18 18:43:26 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"
#include "ft_arraylist_internal.h"

void	ft_arraylist_swap2d(t_arraylist alst, size_t at1[2], size_t at2[2])
{
	void		*temp;
	t_arraylist	ilst1;
	t_arraylist	ilst2;

	ilst1 = alst->arr[at1[0]];
	ilst2 = alst->arr[at2[0]];
	temp = ilst1->arr[at1[1]];
	ilst1->arr[at1[1]] = ilst2->arr[at2[1]];
	ilst2->arr[at2[1]] = temp;
}
