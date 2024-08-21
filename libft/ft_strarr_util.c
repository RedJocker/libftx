/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:12:54 by maurodri          #+#    #+#             */
/*   Updated: 2024/08/21 17:45:29 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <stdlib.h>

void	ft_strarr_free(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
}

void	ft_strarr_printfd(char **arr, int fd)
{
	if (!arr)
	{
		ft_putendl("(nil)");
		return ;
	}
	ft_putstr_fd("{ ", fd);
	if (*arr)
	{
		while (1)
		{
			ft_putstr(*arr);
			arr++;
			if (!*arr)
				break ;
			ft_putstr_fd(", ", fd);
		}
	}
	ft_putendl_fd(" };", fd);
}
/*
#include "ft_string.h"
int main(void)
{
	char *str1 = "hello";
	char *str2 = "there";
	char *str3 = "mate";
	char *arr[] = { str1, str2, str3, 0 };
	ft_strarr_printfd(arr, 1);
	ft_strarr_printfd(0, 1);
	char **arr_aloc = malloc(4 * sizeof(char *));
	int i = -1;
	while (++i < 4)
	{
		arr_aloc[i] = ft_strdup(arr[i]);
	}
	ft_strarr_printfd(arr_aloc, 1);
	ft_strarr_free(arr_aloc);
	return (0);
}
*/
