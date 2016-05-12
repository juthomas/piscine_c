# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 12:03:03 by juthomas          #+#    #+#              #
#    Updated: 2015/12/13 12:03:11 by juthomas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all, clean, fclean, re

.SUFFIXES :

NAME = ft_display_file

SRC = ./ft_display_file.c

OBJ = ./ft_display_file.o

H = ./ft_display_file.h

all :
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(H)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
