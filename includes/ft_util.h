/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:36:47 by maurodri          #+#    #+#             */
/*   Updated: 2024/11/16 02:29:21 by maurodri         ###   ########.fr       */
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
typedef void	(*t_triconsumer)(void *, void *, void *);
typedef int		(*t_pred_char)(char);
typedef int		(*t_pred_int) (int);

void	ft_nop0(void);
void	ft_nop(void *a, ...);
int		ft_int_equal(int *a, int *b);
void	ft_int_print(int *i);
void	ft_int_printerr(int *i);
void	ft_int_printfd(int *i, int fd);
int		ft_int_lt(int *maybe_lower, int *maybe_greater);
void	ft_intarr_printfd(int **arr, int len, int fd);
void	ft_intarr_sort(int **arr, int len);
void	ft_strarr_free(char **arr);
void	ft_strarr_printfd(char **arr, int fd);
char	**ft_strarr_cat(char **strarr0, char **strarr1);

#endif
