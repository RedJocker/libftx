/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maurodri <maurodri@student.42sp...>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:03:44 by maurodri          #+#    #+#             */
/*   Updated: 2024/02/06 09:49:05 by maurodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection/ft_list.h"

static void	new_node(
	t_list **node_ptr, void **content, t_list *lst, void *(*fun)(void *))
{
	*content = fun(lst->content);
	*node_ptr = ft_lstnew(*content);
}

static t_list	*del_and_return_null(void **content, void (*del)(void *))
{
	del(*content);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*fun)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*ptr;
	t_list	*temp;
	void	*content;

	if (!lst || !fun || !del)
		return (NULL);
	new_node(&new_lst, &content, lst, fun);
	if (!new_lst)
		return (del_and_return_null(&content, del));
	ptr = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_node(&temp, &content, lst, fun);
		if (!temp)
		{
			ft_lstclear(&new_lst, del);
			return (del_and_return_null(&content, del));
		}
		ptr->next = temp;
		ptr = ptr->next;
		lst = lst->next;
	}
	return (new_lst);
}
