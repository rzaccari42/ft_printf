# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 20:10:32 by rzaccari          #+#    #+#              #
#    Updated: 2022/05/13 17:55:53 by rzaccari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS += srcs/ft_printf.c
SRCS +=	srcs/ft_format_c.c
SRCS +=	srcs/ft_format_s.c
SRCS +=	srcs/ft_format_p.c
SRCS +=	srcs/ft_format_d.c
SRCS +=	srcs/ft_format_i.c
SRCS +=	srcs/ft_format_u.c
SRCS +=	srcs/ft_format_x_lower.c
SRCS +=	srcs/ft_format_x_upper.c
SRCS +=	srcs/ft_format_pc.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a
LIBC	= ar rc
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

out:
	gcc -g $(CFLAGS) $(SRCS) 
	@./a.out

.PHONY: all clean fclean re
