/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:27:47 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/21 19:31:38 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst && del)
	{
		aux = *lst;
		while (*lst != NULL)
		{
			aux = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = aux;
		}
	}
}
