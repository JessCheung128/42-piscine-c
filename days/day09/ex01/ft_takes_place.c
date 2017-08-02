/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:46:45 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/13 23:39:18 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

void	ft_puthour(int hour)
{
	if (hour < 10)
	{
		ft_putchar(hour + 48);
	}
	else
	{
		ft_putchar(hour / 10 + 48);
		ft_putchar(hour % 10 + 48);
	}
}

void	ft_takes_place(int hour)
{
	int		its_pm_atm;
	int		its_pm_next;
	int		next_hour;
	int		save;

	save = hour;
	its_pm_atm = hour >= 12 ? 1 : 0;
	its_pm_next = (hour + 1) >= 12 && (hour + 1) <= 23 ? 1 : 0;
	hour = its_pm_atm ? hour % 13 : hour % 12;
	hour = save >= 13 ? hour + 1 : hour;
	next_hour = its_pm_next ? hour % 12 + 1 : hour % 13 + 1;
	hour = hour == 0 && !its_pm_atm ? 12 : hour;
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_puthour(hour);
	ft_putstr(its_pm_atm ? ".00 P.M. AND " : ".00 A.M. AND ");
	ft_puthour(next_hour);
	ft_putstr(its_pm_next ? ".00 P.M.\n" : ".00 A.M.\n");
}
