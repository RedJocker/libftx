/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:19:28 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/05 22:52:24 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# define DEFAULT_LINE_SIZE 90

# ifndef FD_SIZE
#  define FD_SIZE 5
# endif

#include <stdlib.h>

typedef struct s_stringbuilder	*t_stringbuilder;

struct s_stringbuilder
{
	char			*str;
	unsigned int	size;
	unsigned int	capacity;
};

typedef struct s_buffer
{
	ssize_t			char_read;
	char			arr[BUFFER_SIZE];
	ssize_t			i;
	char			is_init;
}	t_buffer;

t_stringbuilder	stringbuilder_new(void);
t_stringbuilder	stringbuilder_addchar(t_stringbuilder builder, char ch);
char			*stringbuilder_build(t_stringbuilder builder);
void			stringbuilder_destroy(t_stringbuilder builder);
int				stringbuilder_isempty(t_stringbuilder builder);
char			*get_next_line(int fd);

#endif
