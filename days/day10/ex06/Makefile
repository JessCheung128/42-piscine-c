# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhercha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 19:21:20 by akhercha          #+#    #+#              #
#    Updated: 2017/07/20 14:16:16 by akhercha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = srcs/ft_atoi.c srcs/ft_operations.c srcs/ft_put.c srcs/main.c

all: $(NAME)

$(NAME): compil

compil:
	gcc -C -o $(NAME) $(SRCS) -Iincludes

clean:
	/bin/rm -f $(NAME)

re: clean all
