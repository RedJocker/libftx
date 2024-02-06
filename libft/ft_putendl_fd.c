/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:11:06 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 09:29:54 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_string.h"

void	ft_putendl_fd(char *str, int fd)
{
	size_t	len;

	if (!str)
		return ;
	len = ft_strlen(str);
	write(fd, str, len);
	write(fd, "\n", 1);
}
