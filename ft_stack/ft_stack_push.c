/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:52:58 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/12 20:50:04 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"
#include "collection/ft_stack.h"

t_stack	ft_stack_push(t_stack stack, void *element)
{
	return (ft_arraylist_add(stack, element));
}
