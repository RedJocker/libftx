/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 07:59:35 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 10:23:36 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMLIB_H
# define FT_MEMLIB_H

# include <stdlib.h>

void	*ft_memset(void *buffer, int ch, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *block, int byte, size_t n);
int		ft_memcmp(const void *block1, const void *block2, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_free_retnull(void *to_free);
void	*ft_realloc(void *old_block, size_t old_size, size_t new_size);

#endif
