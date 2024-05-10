/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:23:16 by maurodri          #+#    #+#             */
/*   Updated: 2024/05/10 14:46:00 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "libft.h"

static size_t	count_splits(char const *str, char ch)
{
	size_t	count;
	char	*close_quote;

	count = 0;
	while (*str)
	{
		if (*str != ch)
		{
			count++;
			while (*str && *str != ch)
			{
				if (*str == '\'')
				{
					close_quote = ft_strchr(str + 1, '\'');
					if (close_quote != NULL)
						str = close_quote;
				}
				str++;
			}
		}
		else
			str++;
	}
	return (count);
}

static void	free_arr(char **arr)
{
	char	**ptr;

	ptr = arr;
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(arr);
}

static void	skip_ch(char const **str, char ch)
{
	while (**str && **str == ch)
		(*str)++;
}

static char	*next_token(char const **str, char ch)
{
	size_t	next_len;
	char	*token;
	char	*close_quote;

	skip_ch(str, ch);
	next_len = 0;
	while ((*str)[next_len] && (*str)[next_len] != ch)
	{
		if ((*str)[next_len] == '\'')
		{
			close_quote = ft_strchr((*str) + next_len + 1, '\'');
			if (close_quote != NULL)
				while ((*str) + next_len <= close_quote)
					next_len++;
			else
				next_len++;
		}
		else
			next_len++;
	}
	token = ft_substr(*str, 0, next_len);
	*str += next_len;
	return (token);
}

char	**ft_split_quote(char const *str, char ch)
{
	char	**arr;
	size_t	arr_len;
	size_t	arr_i;

	if (!str)
		return (NULL);
	arr_len = count_splits(str, ch) + 1;
	arr = malloc(arr_len * sizeof(char *));
	if (!arr)
		return (NULL);
	arr_i = 0;
	while (arr_i < arr_len - 1)
	{
		arr[arr_i] = next_token(&str, ch);
		if (!arr[arr_i])
		{
			free_arr(arr);
			return (NULL);
		}
		arr_i++;
	}
	arr[arr_i] = NULL;
	return (arr);
}

/* #include <assert.h> */
/* int main(void) */
/* { */
/* 	int count; */
/* 	char **arr; */

/* 	count = 0; */
/* 	count = count_splits("   abc  def    ' abc  '   hij", ' '); */
/* 	assert(count == 4); */

/*    	count = count_splits(" abc 'def ghi", ' '); */
/* 	assert(count == 3); */

/* 	arr = ft_split_quote("   abc  defg    ' abc  '   hij", ' '); */
/* 	assert(ft_strncmp(arr[0], "abc", 3) == 0); */
/* 	assert(ft_strncmp(arr[1], "defg", 4) == 0); */
/* 	assert(ft_strncmp(arr[2], "' abc  '", 6) == 0); */
/* 	assert(ft_strncmp(arr[3], "hij", 3) == 0); */
/* 	assert(arr[4] == NULL); */

/* 	arr = ft_split_quote(" abc 'def ghi", ' '); */
/* 	assert(ft_strncmp(arr[0], "abc", 3) == 0); */
/* 	assert(ft_strncmp(arr[1], "'def", 4) == 0); */
/* 	assert(ft_strncmp(arr[2], "ghi", 3) == 0); */
/* 	assert(arr[3] == NULL); */

/* 	arr = ft_split_quote(" abc d'ef ghi", ' '); */
/* 	assert(ft_strncmp(arr[0], "abc", 3) == 0); */
/* 	assert(ft_strncmp(arr[1], "d'ef", 4) == 0); */
/* 	assert(ft_strncmp(arr[2], "ghi", 3) == 0); */
/* 	assert(arr[3] == NULL); */

/* 	arr = ft_split_quote(" abc def' ghi", ' '); */
/* 	assert(ft_strncmp(arr[0], "abc", 3) == 0); */
/* 	assert(ft_strncmp(arr[1], "def'", 4) == 0); */
/* 	assert(ft_strncmp(arr[2], "ghi", 3) == 0); */
/* 	assert(arr[3] == NULL); */

/* 	arr = ft_split_quote(" abc def ' ghi", ' '); */
/* 	assert(ft_strncmp(arr[0], "abc", 3) == 0); */
/* 	assert(ft_strncmp(arr[1], "def", 4) == 0); */
/* 	assert(ft_strncmp(arr[2], "'", 3) == 0); */
/* 	assert(ft_strncmp(arr[3], "ghi", 3) == 0); */
/* 	assert(arr[4] == NULL); */
/* } */
