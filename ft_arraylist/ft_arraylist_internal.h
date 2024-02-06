/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_internal.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:01:30 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 10:33:15 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAYLIST_INTERNAL_H
# define FT_ARRAYLIST_INTERNAL_H

# include "ft_memlib.h"
# include "collection/ft_arraylist.h"

struct s_arraylist {
	void	**arr;
	size_t	size;
	size_t	capacity;
	void 	(*destroy_element)(void *element);
};

#endif
