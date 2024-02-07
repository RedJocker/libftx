/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_internals.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:39:55 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 20:51:58 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_INTERNALS_H
# define GET_NEXT_LINE_INTERNALS_H

# include <stdlib.h>
# include <unistd.h>
# include "stringbuilder.h"
# include "get_next_line.h"

typedef struct s_buffer
{
	ssize_t			char_read;
	char			arr[BUFFER_SIZE];
	ssize_t			i;
	char			is_init;
}	t_buffer;

#endif
