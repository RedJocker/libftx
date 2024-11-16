/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 08:03:11 by maurodri          #+#    #+#             */
/*   Updated: 2024/11/16 02:17:25 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include "ft_util.h"
# include <stdlib.h>

size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
int			ft_toupper(int ch);
int			ft_tolower(int ch);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *str, int ch);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_atoi(const char *str);
int			ft_atoi_strict(int *out_ok, const char *str);
long long	ft_strtoll(const char *str, char **endptr);
char		*ft_strdup(const char *str1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *str1, char const *str2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *str, char ch);
char		**ft_split_quote(char const *str, char ch);
char		**ft_splitfun(char const *str, t_pred_int should_split);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *str, char (*fun)(unsigned int, char));
void		ft_striteri(char *str, void (*fun)(unsigned int, char*));
char		*ft_chomp(char *str);

#endif
