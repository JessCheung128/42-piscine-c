# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhercha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/17 19:21:20 by akhercha          #+#    #+#              #
#    Updated: 2017/07/20 14:11:31 by akhercha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 

HEADER = includes

all: $(NAME)

$(NAME): library
	ranlib $(NAME).a

library: compil
	ar rc $(NAME).a $(OBJS)

compil:
	gcc -c $(SRCS) -I$(HEADER)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME).a

re: fclean all
