/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:50:43 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/19 11:28:40 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (*n == '\0')
		return ((char *)h);
	i = 0;
	while (i < len && h[i] != '\0')
	{
		j = 0;
		while (h[i + j] && n[j] != '\0' && i + j < len)
			j++;
		if (n[j] == '\0')
			return ((char *)&h[i]);
		i++;
	}
	return (NULL);
}
