/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:31:23 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/19 12:32:29 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*l;
	unsigned char	aux;

	aux = (unsigned char)c;
	l = s;
	while (*s)
		s++;
	while (*s != *l)
	{
		if (*s == aux)
			return ((char *)s);
		l--;
	}
	if (*s == aux)
		return ((char *)s);
	return (NULL);
}
