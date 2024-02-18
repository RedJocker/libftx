/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_transform2diarg.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:59:34 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/11 07:58:26 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_internal.h"

static int	update_list(
	t_arraylist ilst,
	size_t i,
	void *arg,
	void *(*fun)(size_t i, size_t j, void *element, void *arg))
{
	size_t	j;
	void	*temp;
	int		num_nulls_returned;

	num_nulls_returned = 0;
	j = 0;
	while (j < ilst->size)
	{
		temp = fun(i, j, ilst->arr[j], arg);
		if (temp == NULL)
			num_nulls_returned++;
		ilst->destroy_element(ilst->arr[j]);
		ilst->arr[j] = temp;
		j++;
	}
	return (num_nulls_returned);
}

/*
    Assumes alst is a matrix, that is, a list of list.
    Call fun with each element of matrix its indexes and arg,
    frees the old element and replaces with the return value of fun.
    The fun should not be null.
    If fun return type is the same as
    the type already on alst you may pass NULL for
    update_destroy_element, otherwise you will need
    to pass a valid update_destroy_element for the
    new type.
    For error control reasons returns the number
    of times fun returns NULL, and thus
    will return 0 if fun has never returned NULL.
 */
int	ft_arraylist_transform2diarg(
	t_arraylist alst,
	void *(*fun)(size_t i, size_t j, void *element, void *arg),
	void *arg,
	void (*update_destroy_element)(void *element))
{
	size_t		i;
	int			num_nulls_returned;
	t_arraylist	ilst;

	num_nulls_returned = 0;
	i = 0;
	while (i < alst->size)
	{
		ilst = alst->arr[i];
		num_nulls_returned += update_list(ilst, i, arg, fun);
		if (update_destroy_element != NULL)
			ilst->destroy_element = update_destroy_element;
		i++;
	}
	return (num_nulls_returned);
}
