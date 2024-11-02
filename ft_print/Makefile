# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isegura- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 11:12:22 by isegura-          #+#    #+#              #
#    Updated: 2024/10/23 09:05:18 by isegura-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_print_1.c ft_putnbr.c

OBJS = $(SRC:.c=.o)

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c Makefile ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
