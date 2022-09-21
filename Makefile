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

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror -I.
SRCS	= ft_atoi.c\
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
		ft_toupper.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_strmapi.c

BONUS-SRCS	= ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS	= $(SRCS:.c=.o)
BOBJS	= $(BONUS-SRCS:.c=.o)
NAME	= libft.a

all: $(NAME) $(BONUS)
bonus: $(BONUS)

$(NAME): $(OBJS) $(LIB)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(BONUS): $(BOBJS) $(LIB)
	ar rc $(BONUS) $(BOBJS)
	ranlib $(BONUS)

$(OBJS): $(SRCS) $(LIB)
	gcc $(Cflags) -c $(SRCS) 

$(BOBJS): $(BONUS-SRCS) $(LIB)
	gcc $(Cflags) -c $(BONUS-SRCS)

clean:
	rm -f $(OBJS) $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus
