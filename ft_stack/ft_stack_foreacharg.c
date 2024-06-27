/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_foreacharg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:39:33 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/26 23:27:12 by maurodri         ###   ########.fr       */
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
	int	i;

	i = (int) ft_stack_len(stk);
	while (--i >= 0)
		fun(ft_arraylist_get(stk, i), arg);
}
