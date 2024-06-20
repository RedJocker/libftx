/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:52:49 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/19 21:05:21 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_stack.h"
#include "ft_stdio.h"

void	ft_stack_print(t_stack stack, void (*pfun) (void *))
{
	size_t	i;
	size_t	len;

	ft_putstr_fd("Bottom:[ ", 1);
	len = ft_stack_len(stack);
	i = -1;
	while (++i < len)
	{
		pfun(ft_arraylist_get(stack, i));
		ft_putstr_fd(" ", 1);
	}
	ft_putendl_fd("]:Top", 1);
}
