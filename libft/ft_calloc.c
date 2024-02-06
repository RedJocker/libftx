/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:21:59 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 09:24:36 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memlib.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*block;

	block = malloc(count * size);
	if (block)
		ft_bzero(block, count * size);
	return (block);
}
