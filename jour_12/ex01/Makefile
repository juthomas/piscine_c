# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 12:04:07 by juthomas          #+#    #+#              #
#    Updated: 2015/12/13 12:04:12 by juthomas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all, clean, fclean, re

.SUFFIXES :

NAME = ft_cat

SRC = ./ft_cat.c

OBJ = ./ft_cat.o

H = ./ft_cat.h

all :
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(H)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
