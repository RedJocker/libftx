/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_internal.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:01:30 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/09 05:21:41 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAYLIST_INTERNAL_H
# define FT_ARRAYLIST_INTERNAL_H

# include "ft_memlib.h"
# include "collection/ft_arraylist.h"

# define DEFAULT_ARRAYLIST_SIZE 5

struct s_arraylist
{
	void	**arr;
	size_t	size;
	size_t	capacity;
	void	(*destroy_element)(void *element);
};

#endif
