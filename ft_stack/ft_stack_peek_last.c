/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:21:18 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/27 21:23:19 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_stack.h"
#include "collection/ft_arraylist.h"

void	*ft_stack_peek_last(t_stack stack)
{
	int	len;

	len = ft_stack_len(stack);
	if (len < 1)
		return (NULL);
	return (ft_arraylist_get(stack, 0));
}
