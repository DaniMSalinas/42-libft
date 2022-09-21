/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:54:41 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/21 20:11:46 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_list;

	if (!lst || !f || !del)
		return (NULL);
	new_list = (struct s_list **)malloc(sizeof(struct s_list) * ft_lstsize(lst));
	if (!new_list)
	{
		free(new_list);
		return (NULL);
	}
	while (lst)
	{
		(*new_list)->content = (*f)(lst->content);
		(*new_list) = (*new_list)->next;
		lst = lst->next; 
	}
	(*new_list)->next = NULL;
	return (*new_list);
}
