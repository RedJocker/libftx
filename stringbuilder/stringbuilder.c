/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:32:22 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 20:51:57 by maurodri         ###   ########.fr       */
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

t_stringbuilder	stringbuilder_addchar(t_stringbuilder builder, char ch)
{
	char	*temp;
	size_t	i;

	if (builder->capacity == builder->size)
	{
		temp = malloc(builder->capacity * 2 * sizeof(char));
		if (!temp)
		{
			stringbuilder_destroy(builder);
			return (NULL);
		}
		i = 0;
		while (i < builder->capacity)
		{
			temp[i] = builder->str[i];
			i++;
		}
		free(builder->str);
		builder->str = temp;
		builder->capacity *= 2;
	}
	builder->str[builder->size] = ch;
	builder->size++;
	return (builder);
}

char	*stringbuilder_build(t_stringbuilder builder)
{
	char	*str;
	size_t	i;

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
