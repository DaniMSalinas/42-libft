# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/11 17:55:42 by dmaldona          #+#    #+#              #
#    Updated: 2022/09/11 17:55:42 by dmaldona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I.
SRCS	= ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_tolower.c \
		  ft_toupper.c

OBJS	= $(SRCS:.c=.o)
NAME	= libft.a
RM		= /bin/rm -f

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all:	$(NAME)
clean:
		$(RM) $(NAME) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re:		fclean $(NAME)
.PHONY:	all clean fclean re bonus
