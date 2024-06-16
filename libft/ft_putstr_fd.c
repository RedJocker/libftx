/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:58:35 by maurodri          #+#    #+#             */
/*   Updated: 2024/06/16 00:18:13 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_string.h"

void	ft_putstr_fd(char *str, int fd)
{
	size_t	len;

	if (!str)
		return ;
	len = ft_strlen(str);
	write(fd, str, len);
}

void	ft_putstr(char *str)
{
	ft_putstr_fd(str, 1);
}

void	ft_puterr(char *str)
{
	ft_putstr_fd(str, 2);
}
