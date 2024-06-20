/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 22:55:52 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/20 02:38:04 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_hashset.h"
#include "ft_hashset_internal.h"
#include "ft_memlib.h"

static int hash_add(void **arr, size_t capacity, void *ele, t_hashset hset)
{
	size_t	hash_i;

	hash_i = hset->hash_fun(ele) % capacity;
	while (arr[hash_i] != NULL)
	{
		if (hset->elem_equal(arr[hash_i], ele) != 0)
			return (0);
		hash_i = (hash_i + 1) % capacity;
	}
	arr[hash_i] = ele;
	return (1);
}

static void	hash_realloc(t_hashset hset)
{
	void	**temp;
	size_t	i;
	void 	*current;

	temp = ft_calloc(2 * hset->capacity, sizeof(void *));
	if (!temp)
		return ;
	i = 0;
	while (i < hset->capacity)
	{
		current = hset->arr[i];
		if (current == NULL)
		{
			i++;
			continue ;
		}
		hash_add(temp, 2 * hset->capacity, current, hset);
		i++;
	}
	free(hset->arr);
	hset->arr = temp;
	hset->capacity = 2 * hset->capacity;
}

/*
	Adds element to hset.
	If there are no errors returns hset with element added.
	If reallocation is needed and fails hset is destroyed and
	NULL is returned.
	To protect against errors you should always reassign
	the old hset value with the returned value and check for NULL.
	Transfers the ownership of element to hset.
	Do not call free on element since hset will consider
	being the owner of element after element was added.
*/
t_hashset	ft_hashset_add(t_hashset hset, void *element)
{
	int	was_add;

	if (hset->size >= ((hset->capacity * 7) / 10))
		hash_realloc(hset);
	if (!hset->arr)
	{
		ft_hashset_destroy(hset);
		return (NULL);
	}
	was_add = (
		hash_add(hset->arr, hset->capacity, element, hset));
	if (was_add)
		hset->size++;
	return (hset);
}
