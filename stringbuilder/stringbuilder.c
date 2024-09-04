/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:32:22 by maurodri          #+#    #+#             */
/*   Updated: 2024/09/03 23:50:05 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringbuilder.h"
#include "stringbuilder_internals.h"

t_stringbuilder	stringbuilder_new(void)
{
	t_stringbuilder	new_builder;

	new_builder = malloc(sizeof(struct s_stringbuilder));
	if (!new_builder)
		return (NULL);
	new_builder->str = malloc(DEFAULT_LINE_SIZE * sizeof(char));
	if (!new_builder->str)
	{
		free(new_builder);
		return (NULL);
	}
	new_builder->capacity = DEFAULT_LINE_SIZE;
	new_builder->size = 0;
	return (new_builder);
}

char	*stringbuilder_build(t_stringbuilder builder)
{
	char	*str;
	size_t	i;

	if (!builder)
		return (NULL);
	str = malloc((builder->size + 1) * sizeof(char));
	if (!str)
	{
		stringbuilder_destroy(builder);
		return (NULL);
	}
	i = 0;
	while (i < builder->size)
	{
		str[i] = builder->str[i];
		i++;
	}
	str[builder->size] = '\0';
	stringbuilder_destroy(builder);
	return (str);
}

void	stringbuilder_destroy(t_stringbuilder builder)
{
	free(builder->str);
	free(builder);
}

int	stringbuilder_isempty(t_stringbuilder builder)
{
	return (builder->size == 0);
}
