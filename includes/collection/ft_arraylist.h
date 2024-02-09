/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:52:00 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/09 13:04:23 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAYLIST_H
# define FT_ARRAYLIST_H
# include <stdlib.h>

typedef struct s_arraylist	*t_arraylist;

t_arraylist	ft_arraylist_new(void (*destroy_element)(void *element));
void		ft_arraylist_destroy(t_arraylist alst);
size_t		ft_arraylist_len(t_arraylist alst);
void		*ft_arraylist_get(t_arraylist alst, size_t at);
t_arraylist	ft_arraylist_add(t_arraylist alst, void *element);
t_arraylist	ft_arraylist_addat(t_arraylist alst, void *element, size_t at);
void		ft_arraylist_replace(t_arraylist alst, void *element, size_t at);
void		*ft_arraylist_pop(t_arraylist alst);
void		*ft_arraylist_peek(t_arraylist alst);
void		ft_arraylist_foreach(t_arraylist alst, void (*fun) (void *));
int			ft_arraylist_transform(
				t_arraylist alst,
				void *(*fun)(void *),
				void (*update_destroy_element)(void *element));
int 		ft_arraylist_transform2di(
				t_arraylist alst,
				void *(*fun)(size_t i, size_t j,void *element),
				void (*update_destroy_element)(void *element));
int			ft_arraylist_transform2diarg(
				t_arraylist alst,
				void *(*fun)(size_t i, size_t j, void *element, void *arg),
				void *arg,
				void (*update_destroy_element)(void *element));
#endif
