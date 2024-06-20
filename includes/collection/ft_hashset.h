/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashset.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 23:06:17 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/20 02:42:23 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHSET_H
# define FT_HASHSET_H

# include <stdlib.h>
# include "ft_util.h"

typedef struct s_hashset	*t_hashset;

t_hashset	ft_hashset_new(
				size_t (*hash_fun)(void *element),
				int (*elem_equal)(void *ele1, void *ele2),
				void (*destroy_element)(void *element));
void		ft_hashset_destroy(t_hashset alst);
void		ft_hashset_debug(t_hashset hset, t_consumer printfun);
size_t		ft_hashset_len(t_hashset alst);
t_hashset	ft_hashset_add(t_hashset alst, void *element);
void		ft_hashset_foreach(t_hashset alst, void (*fun) (void *));
int			ft_hashset_transform(
				t_hashset alst,
				void *(*fun)(void *),
				void (*update_destroy_element)(void *element));
#endif
