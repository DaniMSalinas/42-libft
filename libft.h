/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaldona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:07:00 by dmaldona          #+#    #+#             */
/*   Updated: 2022/07/05 13:20:30 by dmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/** simple functions **/
/* characters functions */
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);

/* memory functions */
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);

/* string functions */
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void	*ft_bzero(void *s, size_t n);

/** complex functions **/

#endif
