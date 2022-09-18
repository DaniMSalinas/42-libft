/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:09:28 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/16 15:33:33 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	aux;
	unsigned char	*ptr;

	ptr = b;
	aux = (unsigned char)c;
	while (len > 0)
	{
		*ptr = aux;
		ptr++;
		len--;
	}
	return (b);
}
