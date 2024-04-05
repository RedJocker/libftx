/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_switch.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:19:29 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/18 18:24:56 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

void	ft_arraylist_switch(t_arraylist alst, void *element, size_t at)
{
	if (at >= alst->size)
		return ;
	alst->arr[at] = element;
}
