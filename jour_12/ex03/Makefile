# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 12:06:00 by juthomas          #+#    #+#              #
#*   Updated: 2015/12/14 19:12:57 by juthomas         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

.PHONY : all, clean, fclean, re

.SUFFIXES :

NAME = ft_hexdump

SRC = ./hexdump1.c ./hexdump2.c ./hexdump3.c ./hexdump4.c ./hexdump5.c \
	./hexdump6.c ./hexdump7.c ./hexdump8.c ./hexdump9.c ./hexdump10.c

	

OBJ = ./hexdump1.o ./hexdump2.o ./hexdump3.o ./hexdump4.o ./hexdump5.o \
	./hexdump6.o ./hexdump7.o ./hexdump8.o ./hexdump9.o ./hexdump10.o

H = ./

all :
	gcc -c -Wall -Werror -Wextra $(SRC) -I $(H)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
