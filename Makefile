# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: liulm <liulm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 14:04:19 by liulm             #+#    #+#              #
#    Updated: 2024/10/21 16:20:21 by liulm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Werror -Wextra -Wall

RM = rm -f

HEADER = libft.h

SRCS =	ft_isalnum.c			\#
		ft_isalpha.c			\#
		ft_isdigit.c			\#
		ft_ascii.c				\#
		ft_isprint.c			\#
		ft_strlen.c				\#
		ft_memset.c				\#
		ft_bzero.c				\#
		ft_memcpy.c				\#
		ft_memmove.c			\#
		ft_strlcpy.c			\#
		ft_strlcat.c			\#
		ft_toupper.c			\#
		ft_tolower.c			\#
		ft_strchr.c				\#
		ft_strrchr.c			\#
		ft_strncmp.c			\#
		ft_memchr.c				\#
		ft_strnstr.c			\#
		ft_atoi.c				\#
		ft_calloc.c				\#
		ft_strdup.c				\#
		ft_substr.c				\#
		ft_strjoin.c			\#
		ft_strtrim.c			\
		ft_split.c				\
		ft_itoa.c				\
		ft_strmapi.c			\
		ft_striteri.c			\
		ft_putchar_fd.c			\
		ft_putstr_fd.c			\
		ft_putendl_fd.c			\
		ft_putnbr_fd.c

OBJS =	${SRCS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

all: ${NAME}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY all clean fclean re
