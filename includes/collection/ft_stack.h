/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:45:00 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/27 23:07:21 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H
# include <stdlib.h>
# include "collection/ft_arraylist.h"
# include "ft_util.h"

typedef struct s_arraylist	*t_stack;

t_stack		ft_stack_new(void (*destroy_element)(void *element));
void		ft_stack_destroy(t_stack stack);
size_t		ft_stack_len(t_stack stack);
void		*ft_stack_peek(t_stack stack);
void		*ft_stack_peek_next(t_stack stack);
void		*ft_stack_peek_last(t_stack stack);
t_stack		ft_stack_push(t_stack stack, void *element);
void		*ft_stack_pop(t_stack stack);
t_stack		ft_stack_push_back(t_stack stack, void *element);
void		*ft_stack_pop_back(t_stack stack);
void		ft_stack_print(t_stack stack, void (*pfun) (void *));
void		ft_stack_printerr(t_stack stack, void (*pfun) (void *));
void		ft_stack_foreach(t_stack stk, t_consumer fun);
void		ft_stack_foreacharg(t_stack stk, t_biconsumer fun, void *arg);

#endif
