/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_peek_next.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:16:52 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/28 00:10:17 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_stack.h"
#include "collection/ft_arraylist.h"

void	*ft_stack_peek_next(t_stack stack)
{
	int	len;

	len = ft_stack_len(stack);
	if (len < 2)
		return (NULL);
	return (ft_arraylist_get(stack, len - 2));
}
