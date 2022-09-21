/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:08:51 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/21 21:08:52 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (!dstsize && !dst)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	i = 0;
	j = len_dst;
	if (dstsize > 0)
	{
		while (src[i] && len_dst + i < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	return (len_src + len_dst);
}
