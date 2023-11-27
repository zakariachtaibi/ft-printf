# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zchtaibi <zchtaibi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 10:25:02 by zchtaibi          #+#    #+#              #
#    Updated: 2023/11/26 22:08:03 by zchtaibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putpoint.c ft_puthex.c ft_putuns.c
OBGT = ${SRCS:.c=.o}
NAME = libftprintf.a

all : ${NAME}

${NAME}:${OBGT}
	ar rc $@ ${OBGT}

clean :
	rm -rf ${NAME}

fclean : clean
	rm -rf ${OBGT}

re :
	fclean all

.PHONY : all clean fclean re