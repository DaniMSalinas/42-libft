/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:48:46 by dmaldona          #+#    #+#             */
/*   Updated: 2022/07/05 12:49:24 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	m;
	unsigned char	*str;

	i = 0;
	m = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == m)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
