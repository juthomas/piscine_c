# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 12:08:13 by juthomas          #+#    #+#              #
#    Updated: 2015/12/13 12:09:17 by juthomas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean

.SUFFIXES:

NAME = ft_last

SRC = last.c

OBJ = last.o

all :
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -Wall -Werror -Wextra $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
