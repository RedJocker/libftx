/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:18:30 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/11 19:30:10 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"
#include "collection/ft_stack.h"

t_stack		ft_stack_add(t_stack stack, void *element)
{
	return (ft_arraylist_addat(stack, element, 0));
}
