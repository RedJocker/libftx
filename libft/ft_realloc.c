/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:09:11 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/07 20:12:11 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_realloc(void *block, size_t old_size, size_t new_size)
{
	unsigned char	*old_block;
	unsigned char	*new_block;
	size_t			i;
	size_t			copy_size;
	unsigned char	temp;

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
	i = 0;
	while (i < copy_size)
	{
		temp = old_block[i];
		new_block[i] = temp;
		i++;
	}
	free(block);
	return ((void *) new_block);
}
