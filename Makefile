# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 17:09:00 by rmatsuba          #+#    #+#              #
#    Updated: 2023/10/26 19:47:51 by rmatsuba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_print_num.c ft_print_word.c ft_help.c ft_print_pointer.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
CC = cc
NAME = libftprintf.a
DEPS = ft_printf.h

all : ${NAME}

${NAME} : ${OBJS}
	ar -rcs ${NAME} ${OBJS}

%.o: %.c ${DEPS}
	${CC} ${CFLAGS} -c $< -o $@
clean :
	rm -f ${OBJS} ${BONUS_OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY:			all clean fclean re bonus