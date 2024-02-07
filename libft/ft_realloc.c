/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:09:11 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/07 20:36:49 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memlib.h"

void	*ft_realloc(void *block, size_t old_size, size_t new_size)
{
	unsigned char	*old_block;
	unsigned char	*new_block;
	size_t			copy_size;

	old_block = (unsigned char *) block;
	if (new_size == 0)
		new_size = 1;
	new_block = malloc(new_size);
	if (!new_block)
		return (NULL);
	if (!block)
		return (new_block);
	if (new_size > old_size)
		copy_size = old_size;
	else
		copy_size = new_size;
	ft_memcpy(new_block, old_block, copy_size);
	free(block);
	return ((void *) new_block);
}
