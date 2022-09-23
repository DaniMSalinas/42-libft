/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:59:30 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/23 18:32:37 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	s = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!s)
		return (NULL);
	ft_memcpy(s, s1, ft_strlen(s1));
	ft_memcpy(&s[ft_strlen(s1)], s2, ft_strlen(s2));
	return (s);
}
