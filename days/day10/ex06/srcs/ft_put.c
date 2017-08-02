/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 09:39:59 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/20 16:20:07 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void		ft_putnbr(int nb)
{
	long	big;

	if (nb < 0)
	{
		big = (long)nb * -1;
		ft_putchar('-');
	}
	else
		big = nb;
	if (big <= 9)
	{
		ft_putchar(big + '0');
	}
	else
	{
		ft_putnbr(big / 10);
		ft_putnbr(big % 10);
	}
}
