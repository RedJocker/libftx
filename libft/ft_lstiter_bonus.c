/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:03:34 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 09:48:51 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_list.h"

void	ft_lstiter(t_list *lst, void (*fun)(void *))
{
	if (!lst || !fun)
		return ;
	while (lst)
	{
		fun(lst->content);
		lst = lst->next;
	}
}
