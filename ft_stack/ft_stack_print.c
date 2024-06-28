/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:52:49 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/27 23:07:06 by maurodri         ###   ########.fr       */
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

void	ft_stack_printerr(t_stack stack, void (*pfun) (void *))
{
	size_t	i;
	size_t	len;

	ft_putstr_fd("Bottom:[ ", 2);
	len = ft_stack_len(stack);
	i = -1;
	while (++i < len)
	{
		pfun(ft_arraylist_get(stack, i));
		ft_putstr_fd(" ", 2);
	}
	ft_putendl_fd("]:Top", 2);
}
