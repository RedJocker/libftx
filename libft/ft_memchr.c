/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:44:59 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 09:23:52 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memlib.h"

void	*ft_memchr(const void *block, int byte, size_t n)
{
	while (n > 0)
	{
		if (*((unsigned char *)block) == (unsigned char)byte)
			return ((void *)block);
		block++;
		n--;
	}
	return (NULL);
}
