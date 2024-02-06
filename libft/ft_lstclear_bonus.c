/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:02:59 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 09:48:40 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_list.h"

void	ft_lstclear(t_list **lst, void (*del_content)(void*))
{
	t_list	*ptr;

	if (!lst)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del_content);
		*lst = ptr;
	}
}
