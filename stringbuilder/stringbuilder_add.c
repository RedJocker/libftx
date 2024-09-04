/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder_add.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 23:49:04 by maurodri          #+#    #+#             */
/*   Updated: 2024/09/04 01:38:26 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringbuilder.h"
#include "stringbuilder_internals.h"
#include <stdarg.h>

t_stringbuilder	stringbuilder_addchar(t_stringbuilder builder, char ch)
{
	char	*temp;
	size_t	i;

	if (!builder)
		return (NULL);
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
	builder->str[builder->size++] = ch;
	return (builder);
}

void	stringbuilder_addstr(t_stringbuilder *builder, char *str)
{
	if (!builder || !str)
		return ;
	while (*str && *builder)
	{
		*builder = stringbuilder_addchar(*builder, *str);
		str++;
	}
}

void	stringbuilder_addstrsva(t_stringbuilder *builder, ...)
{
	va_list	list;
	char	*str;

	if (!builder)
		return ;
	va_start(list, builder);
	str = va_arg(list, char *);
	while (str && *builder)
	{
		stringbuilder_addstr(builder, str);
		str = va_arg(list, char *);
	}
	va_end(list);
}
