# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 12:45:50 by lulm              #+#    #+#              #
#    Updated: 2023/11/09 02:51:14 by lionelulm        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -rf

SOURCES = 	ft_atoi.c		\
			ft_bzero.c		\
			ft_calloc.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memchr.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_strchr.c		\
			ft_strlen.c		\
			ft_strrchr.c	\
			ft_tolower.c	\
			ft_toupper.c	\

OBJS = (SOURCES: .c= .o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:	rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean $(NAME)

.PHONY: all clean fclean
