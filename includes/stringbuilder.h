/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringbuilder.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:34:05 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 20:36:36 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGBUILDER_H
# define STRINGBUILDER_H

typedef struct s_stringbuilder	*t_stringbuilder;

t_stringbuilder	stringbuilder_new(void);
t_stringbuilder	stringbuilder_addchar(t_stringbuilder builder, char ch);
char			*stringbuilder_build(t_stringbuilder builder);
void			stringbuilder_destroy(t_stringbuilder builder);
int				stringbuilder_isempty(t_stringbuilder builder);

#endif
