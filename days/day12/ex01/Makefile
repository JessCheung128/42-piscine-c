# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhercha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 19:21:20 by akhercha          #+#    #+#              #
#    Updated: 2017/07/21 14:33:01 by akhercha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft\_cat

SRCS = srcs/main.c srcs/ft_put.c srcs/ft_error.c srcs/ft_read.c

OBJS = main.o ft_put.o ft_error.o ft_read.o

all: $(NAME)

$(NAME): bin
	gcc -o $(NAME) $(OBJS)
	
bin:
	gcc -c $(SRCS) -Iincludes

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
