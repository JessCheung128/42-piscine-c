/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 23:03:06 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 23:03:07 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_atoi(char *str)
{
	int number;
	int negative;

	number = 0;
	negative = 0;
	if (!str)
		return (0);
	while (*str == ' ' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == '\t')
		++str;
	if (*str == '-' || *str == '+')
		negative = (*str++ == '-') ? 1 : 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + *str++ - '0';
	}
	return ((negative) ? number * -1 : number);
}
