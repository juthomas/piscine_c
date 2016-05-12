# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/30 12:49:48 by juthomas          #+#    #+#              #
#    Updated: 2015/10/31 18:01:05 by juthomas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

.SUFFIXES:

NAME = libft.a

SRC1 = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	./srcs/ft_swap.c ./srcs/ft_strlen.c

SRC2 = ./ft_putchar.o ./ft_putstr.o ./ft_strcmp.o ./ft_swap.o ./ft_strlen.o

HEAD = ./includes

all:
	gcc -c -Werror -Wextra -Wall -I $(HEAD) $(SRC1)
	ar rc $(NAME) $(SRC2)

clean:
	rm -f $(SRC2)

fclean: clean
	rm -f $(NAME)

re: fclean all
