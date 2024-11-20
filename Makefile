# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseverin <mseverin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/28 19:12:56 by jterrazz          #+#    #+#              #
#    Updated: 2024/11/20 17:54:16 by mseverin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -I${INCLUDES} -I${LIBFT_PATH} -Wall -Wextra -Werror
LFLAGS = -L${LIBFT_PATH} -lft

LIBFT = libft.a
LIBFT_H = libft.h
LIBFT_PATH = ./libft/

INCLUDES = ./
SRC =	ft_printf.c \
		ft_printfchar.c \
		ft_printfstr.c \
		ft_printfint.c \
		ft_printfunsigned.c \
		ft_printfhexamaj.c \
		ft_printfhexalow.c \
		ft_printfpointer.c

OFILES = ${SRC:.c=.o}

all :  ${LIBFT} $(NAME)

$(NAME) : ${OFILES}
	ar -x ${LIBFT_PATH}${LIBFT}
	ar -cr ${NAME} ${OFILES} *.o
	rm -f *.o
#	${CC} ${OFILES} ${CFLAGS} -o ${NAME} ${LFLAGS}

${LIBFT}:
	cd ${LIBFT_PATH} && make all

clean : libft_clean
	rm -f $(OFILES)

libft_clean:
	cd ${LIBFT_PATH} && make clean

fclean : libft_fclean clean
	rm -f $(NAME)

libft_fclean:
	cd ${LIBFT_PATH} && make fclean

re : fclean all
