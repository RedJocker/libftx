/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:17:35 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 20:45:50 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_internals.h"

static void	buffer_flush(t_buffer *b, t_stringbuilder *builder)
{
	while (*builder && b->i < BUFFER_SIZE && b->is_init)
	{
		if (b->arr[b->i] != '\0')
		{
			*builder = stringbuilder_addchar(*builder, b->arr[b->i]);
			if (b->arr[b->i] == '\n')
			{
				b->arr[b->i] = '\0';
				break ;
			}
			b->arr[b->i] = '\0';
		}
		b->i++;
	}
}

static void	buffer_fill(t_buffer *b, int fd)
{
	b[fd].char_read = read(fd, b[fd].arr, BUFFER_SIZE);
	b[fd].i = 0;
	b[fd].is_init = 1;
}

char	*get_next_line(int fd)
{
	static t_buffer	b[FD_SIZE];
	t_stringbuilder	builder;

	if (fd < 0 || fd >= FD_SIZE)
		return (NULL);
	b[fd].char_read = 1;
	builder = stringbuilder_new();
	while (builder && (b[fd].char_read > 0 || !b[fd].is_init))
	{
		buffer_flush(b + fd, &builder);
		if (b[fd].i >= BUFFER_SIZE || !b[fd].is_init)
			buffer_fill(b, fd);
		else
			break ;
	}
	if (!builder)
		return (NULL);
	if (b[fd].char_read < 0 || stringbuilder_isempty(builder))
	{
		stringbuilder_destroy(builder);
		return (NULL);
	}
	return (stringbuilder_build(builder));
}
