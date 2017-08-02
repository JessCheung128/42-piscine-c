# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhercha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/25 23:08:21 by akhercha          #+#    #+#              #
#    Updated: 2017/07/25 23:08:22 by akhercha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft\_tail

SRC = srcs/ft_tail.c srcs/lib_disp.c srcs/ft_atoi.c

OBJECTS = lib_disp.o ft_tail.o ft_atoi.o

$(NAME): all

all: BIN
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJECTS)

BIN:
	gcc -Wall -Wextra -Werror -c $(SRC) -Iincludes

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
