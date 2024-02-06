/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_replace.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:51:15 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 10:52:10 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

void	ft_arraylist_replace(t_arraylist alst, void *element, size_t at)
{
	if (at >= alst->size)
		return ;
	alst->destroy_element(alst->arr[at]);
	alst->arr[at] = element;
}
