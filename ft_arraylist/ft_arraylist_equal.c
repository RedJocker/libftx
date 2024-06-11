/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_equal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:38:05 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/11 18:42:07 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_arraylist.h"

int	ft_arraylist_equal(
	t_arraylist arr1, t_arraylist arr2, int (*comp_fun) (void *, void *))
{
	size_t	i;
	size_t	len;

	len = ft_arraylist_len(arr1);
	if (len != ft_arraylist_len(arr2))
		return (0);
	i = -1;
	while (++i < len)
	{
		if (comp_fun(ft_arraylist_get(arr1, i),
				ft_arraylist_get(arr2, i)) == 0)
			return (0);
	}
	return (1);
}

/* #include "ft_util.h" */
/* #include "assert.h" */
/* int	comp_int(int *a, int *b) */
/* { */
/* 	return (*a == *b); */
/* } */

/* int	main(void) */
/* { */
/* 	t_arraylist	a1; */
/* 	t_arraylist	a2; */
/* 	int			arr[10]; */

/* 	a1 = ft_arraylist_new(ft_nop); */
/* 	a2 = ft_arraylist_new(ft_nop); */
/* 	assert(ft_arraylist_equal(a1, a2, comp_int) != 0); */
/* 	arr[0] = 10; */
/* 	ft_arraylist_add(a1, arr + 0); */
/* 	assert(ft_arraylist_equal(a1, a2, comp_int) == 0); */
/* 	arr[1] = 20; */
/* 	ft_arraylist_add(a2, arr + 1); */
/* 	assert(ft_arraylist_equal(a1, a2, comp_int) == 0); */
/* 	arr[1] = 10; */
/* 	assert(ft_arraylist_equal(a1, a2, comp_int) != 0); */
/* 	arr[2] = 100; */
/* 	ft_arraylist_add(a2, arr + 2); */
/* 	assert(ft_arraylist_equal(a1, a2, comp_int) == 0); */
/* 	arr[3] = 100; */
/* 	ft_arraylist_add(a1, arr + 3); */
/* 	assert(ft_arraylist_equal(a1, a2, comp_int) != 0); */
/*     ft_arraylist_destroy(a1); */
/* 	ft_arraylist_destroy(a2);	 */
/* 	return (0); */
/* } */
