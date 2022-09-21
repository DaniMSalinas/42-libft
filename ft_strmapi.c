/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:39:43 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/21 18:21:51 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*n;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	n = ft_strdup(s);
	if (!n)
		return (NULL);
	while (i < size)
	{
		n[i] = f(i, s[i]);
		i++;
	}
	return (n);
}
