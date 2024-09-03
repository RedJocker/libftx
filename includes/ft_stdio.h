/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 07:47:29 by maurodri          #+#    #+#             */
/*   Updated: 2024/09/03 19:34:14 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putstr(char *str);
void	ft_puterr(char *str);
void	ft_putendl_fd(char *str, int fd);
void	ft_putendl(char *str);
void	ft_puterrl(char *str);
void	ft_putnbr_fd(int n, int fd);

int		ft_printf(const char *str, ...);
int		ft_asprintf(char **outstr, const char *str, ...);
int		ft_vasprintf(char **outstr, const char *str, va_list args);

#endif
