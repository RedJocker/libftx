/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_foreach.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:25:03 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/26 20:30:38 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_stack.h"
#include "collection/ft_arraylist.h"
#include "ft_util.h"

/*
	Calls fun with each element of stk.
	The fun should not be null.
	Not intended for mutation of stack values.
*/
void	ft_stack_foreach(t_stack stk, t_consumer fun)
{
	ft_arraylist_foreach(stk, fun);
}
