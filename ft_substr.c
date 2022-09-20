/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:32:00 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/20 10:45:48 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	substring = ft_calloc(len + 1, sizeof(char *));
	if (!substring)
		return (NULL);
	ft_memcpy(substring, &s[start], len);
	return (substring);
}
