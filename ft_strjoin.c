/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:10:11 by dmaldona          #+#    #+#             */
/*   Updated: 2022/09/16 14:29:31 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *s;
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    s = (char *)malloc(s1_len + s2_len + 1);
    if (!s)
        return (NULL);
    i = 0;
    while (i < s1_len)
    {
        s[i] = s1[i];
    }
    while (i < s1_len + s2_len)
    {
        s[i] = s2[i];
    }
    s[i] = '\0';
    return (s);
}