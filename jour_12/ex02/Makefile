# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 12:04:49 by juthomas          #+#    #+#              #
#    Updated: 2015/12/13 12:04:56 by juthomas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all, clean, fclean, re

.SUFFIXES :

NAME = ft_tail

SRC = ./tail1.c ./tail2.c ./tail3.c

OBJ = ./tail1.o ./tail2.o ./tail3.o

H = ./tail.h

all :
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(H)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
