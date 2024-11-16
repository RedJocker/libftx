/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:49:43 by maurodri          #+#    #+#             */
/*   Updated: 2024/11/16 01:56:48 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"
#include "ft_util.h"

void	ft_arraylist_sort(t_arraylist lst, t_intbifun compare_fun)
{
	size_t	i;
	size_t	top;

	top = ft_arraylist_len(lst);
	if (top > 0)
	{
		while (--top > 0)
		{
			i = 0;
			while (++i <= top)
			{
				if (compare_fun(ft_arraylist_get(lst, i - 1), \
								ft_arraylist_get(lst, i)) > 0)
					ft_arraylist_swap(lst, i - 1, i);
			}
		}
	}
}
