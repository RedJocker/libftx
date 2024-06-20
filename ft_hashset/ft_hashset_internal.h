/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset_internal.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 22:53:50 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/19 23:57:44 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHSET_INTERNAL_H
# define FT_HASHSET_INTERNAL_H

# include "collection/ft_hashset.h"

# define DEFAULT_HASHSET_SIZE 10

struct s_hashset
{
	void	**arr;
	size_t	size;
	size_t	capacity;
	size_t	(*hash_fun)(void *element);
	int		(*elem_equal)(void *ele1, void *ele2);
	void	(*destroy_element)(void *element);
};

#endif
