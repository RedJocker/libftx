/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarr_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 01:16:46 by maurodri          #+#    #+#             */
/*   Updated: 2024/07/11 19:03:47 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_util.h"

void	ft_intarr_printfd(int **arr, int len, int fd)
{
	int	i;

	if (len <= 0)
		return (ft_putstr_fd("{};", fd));
	i = -1;
	ft_putstr_fd("{ ", fd);
	while (++i < len)
	{
		ft_int_print(arr[i]);
		ft_putstr_fd(" ", fd);
	}
	ft_putendl_fd("};", fd);
}

static void	swap(int **a, int **b)
{
	int	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_intarr_sort(int **arr, int len)
{
	int	pivot_i;
	int	last_i;
	int	next_i;

	if (len <= 1)
		return ;
	pivot_i = 0;
	last_i = (len - 1);
	while (pivot_i < last_i)
	{
		next_i = pivot_i + 1;
		if (*arr[pivot_i] >= *arr[next_i])
			swap(arr + pivot_i++, arr + next_i);
		else
			swap(arr + last_i--, arr + next_i);
	}
	last_i = (len - 1);
	if (pivot_i > 0)
		ft_intarr_sort(arr, pivot_i);
	if (pivot_i < last_i)
		ft_intarr_sort(arr + pivot_i + 1, last_i - pivot_i);
}

/* int main(void) */
/* { */
/* 	int a[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }; */
/* 	int *arr[10] = */
/* 		{ a + 0, */
/* 		  a + 1, */
/* 		  a + 2, */
/* 		  a + 3, */
/* 		  a + 4, a + 5, a + 6, a + 7, a + 8, a + 9 }; */
/* 	ft_intarr_printfd(arr, 10, 1); */
/* 	ft_intarr_sort(arr, 10); */
/* 	ft_intarr_printfd(arr, 10, 1); */
/* 	return (0); */
/* } */
