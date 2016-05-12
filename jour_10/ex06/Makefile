# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/31 15:46:08 by juthomas          #+#    #+#              #
#    Updated: 2015/10/31 17:14:36 by juthomas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

.SUFFIXES:

NAME = do-op

SRC1 = do_op.c do_op2.c do_op3.c

SRC2 = do_op.o do_op2.o do_op3.o

SRC3 = includes

all:
	gcc -c -Wall -Werror -Wextra -I $(SRC3) $(SRC1)
	gcc $(SRC2) -o $(NAME)

clean:
	rm -f $(SRC2)

fclean: clean
	rm -f $(NAME)

re: fclean all
