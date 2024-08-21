/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:20:05 by maurodri          #+#    #+#             */
/*   Updated: 2024/08/21 17:38:38 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*dup;

	if (!str)
		return (0);
	size = ft_strlen(str) + 1;
	dup = malloc(size * sizeof(char));
	if (dup)
		ft_strlcpy(dup, str, size);
	return (dup);
}
