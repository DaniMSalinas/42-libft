/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:18:42 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/19 10:57:50 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_aux;
	unsigned char	*dst_aux;

	src_aux = (unsigned char *)src;
	dst_aux = (unsigned char *)dst;
	if (dst_aux < src_aux)
	{
		while (len--)
			*dst_aux++ = *src_aux++;
	}
	if (dst_aux > src_aux)
	{
		src_aux += len - 1;
		dst_aux += len - 1;
		while (len--)
			*dst_aux-- = *src_aux--;
	}
	return (dst);
}
