# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isegura- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/15 13:17:26 by isegura-          #+#    #+#              #
#    Updated: 2024/09/17 13:25:40 by isegura-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror


SRCDIR = ./srcs
INCDIR = ./includes

SRCS = $(SRCDIR)/ft_putchar.c \
       $(SRCDIR)/ft_swap.c \
       $(SRCDIR)/ft_putstr.c \
       $(SRCDIR)/ft_strlen.c \
       $(SRCDIR)/ft_strcmp.c

OBJS =  $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(INCDIR)  -o $@ $<

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
