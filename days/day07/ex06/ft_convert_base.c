/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 22:11:07 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/19 15:53:52 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i = i + 1;
	return (i);
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

int		ft_atoi_base(char *str, int base)
{
	int nb;
	int i;
	int neg;

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
	while (str[i] != '\0')
		nb = nb * base + (str[i++] - '0');
	return (neg ? -nb : nb);
}

char	*ft_itoa_base(int nbr, char *base)
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
		str[i--] = base[fat % ft_strlen(base)];
		fat = fat / ft_strlen(base);
	}
	if (i == 0)
		str[i] = '-';
	str[ft_count_dig(nbr)] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*new_nbr;

	number = ft_atoi_base(nbr, ft_strlen(base_from));
	new_nbr = ft_itoa_base(number, base_to);
	return (new_nbr);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc == 4)
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
