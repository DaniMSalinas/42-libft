/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:44:37 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/19 15:27:06 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while ((ft_strchr(set, s1[start])) != 0 && (start < end))
		start++;
	while ((ft_strchr(set, s1[end])) != 0 && (start < end))
		end--;
	return (ft_substr((char *)s1, start, end - start + 1));
}
