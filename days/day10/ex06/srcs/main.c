/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 10:08:22 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/19 16:15:49 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char			ft_first_char(char *str)
{
	int		i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i = i + 1;
	return (str[i]);
}

t_operations	ft_choose_function(char *str)
{
	char			operator;
	t_operations	functions[5];

	operator = ft_first_char(str);
	if (operator != '+' && operator != '-' && operator != '/'
			&& operator != '%' && operator != '*')
		return (0);
	functions[0] = &ft_add;
	functions[1] = &ft_minus;
	functions[2] = &ft_mult;
	functions[3] = &ft_divided;
	functions[4] = &ft_modulo;
	if (operator == '+')
		return (functions[0]);
	else if (operator == '-')
		return (functions[1]);
	else if (operator == '*')
		return (functions[2]);
	else if (operator == '/')
		return (functions[3]);
	else
		return (functions[4]);
}

int				main(int argc, char **argv)
{
	int				a;
	int				b;
	t_operations	f;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	f = ft_choose_function(argv[2]);
	if (b == 0 && f == &ft_divided)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (b == 0 && f == &ft_modulo)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(f != 0 ? f(a, b) : 0);
	ft_putchar('\n');
	return (0);
}
