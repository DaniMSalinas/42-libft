/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:31:23 by dmaldona          #+#    #+#             */
/*   Updated: 2022/07/05 13:53:27 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	char	*aux;
	size_t	i;

	l = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == l)
			aux = (char *)&s[i];
		i++;
	}
	if (l == '\0')
		return (aux);
	else
		return (NULL);
}
