/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:36:47 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/19 21:08:50 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H

typedef void	*(*t_fun)(void *);
typedef void	*(*t_bifun)(void *, void *);
typedef int		(*t_intfun)(void *);
typedef int		(*t_intbifun)(void *, void *);
typedef void	(*t_consumer)(void *);
typedef void	(*t_biconsumer)(void *, void *);

void	ft_nop0(void);
void	ft_nop(void *a, ...);
int		ft_int_equal(int *a, int *b);
void	ft_int_print(int *i);

#endif
