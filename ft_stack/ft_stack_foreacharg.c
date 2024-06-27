/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_foreacharg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:39:33 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/26 20:49:00 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"
#include "collection/ft_stack.h"
#include "ft_util.h" 

/*
	Calls fun with each element of stk together with arg.
	The fun should not be null.
	Not intended for mutation,
	use ft_stack_transformn instead.
*/
void	ft_stack_foreacharg(t_stack stk, t_biconsumer fun, void *arg)
{
	ft_arraylist_foreacharg(stk, fun, arg);
}
