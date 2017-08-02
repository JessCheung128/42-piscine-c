/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 09:23:20 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/22 16:29:21 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *str)
{
	int		nb;
	int		i;
	int		neg;

	i = 0;
	neg = 0;
	nb = 0;
	while (str[i] == '\n' || str[i] == '\f' || str[i] == '\r' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (neg ? -nb : nb);
}

int		ft_count_dig(int nbr)
{
	int		len;
	long	fat;

	len = 0;
	if (nbr < 0)
		len = len + 1;
	fat = nbr < 0 ? (long)nbr * -1 : nbr;
	while (fat != 0)
	{
		fat = fat / 10;
		len = len + 1;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	long	fat;

	if (nbr == 0)
		return ("0");
	i = ft_count_dig(nbr) - 1;
	str = malloc(sizeof(char) * (ft_count_dig(nbr) + 1));
	fat = nbr < 0 ? (long)nbr * -1 : nbr;
	while (fat != 0)
	{
		str[i--] = fat % 10 + '0';
		fat = fat / 10;
	}
	if (i == 0)
		str[i] = '-';
	str[ft_count_dig(nbr)] = '\0';
	return (str);
}
