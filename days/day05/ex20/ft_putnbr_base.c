/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:49:48 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/12 12:46:35 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

int		is_in(char c, char *str)
{
	int		x;

	x = 0;
	while (x <= ft_strlen(str) && str[x] != '\0')
	{
		if (str[x] == c)
			return (1);
		x = x + 1;
	}
	return (0);
}

int		has_samechar_twice(char *str)
{
	int		i;
	int		j;
	char	*tmp;

	tmp = str;
	i = 0;
	j = 1;
	while (i < ft_strlen(tmp) - 1)
	{
		while (j < ft_strlen(tmp))
		{
			if (tmp[j] == tmp[i])
				return (1);
			j = j + 1;
		}
		i = i + 1;
		j = i + 1;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		i;
	long	fat;
	char	s[1000];

	len = ft_strlen(base);
	i = 0;
	fat = nbr;
	if (fat < 0)
	{
		fat = fat * -1;
		ft_putchar('-');
	}
	if (len > 1 && !has_samechar_twice(base)
			&& !is_in('+', base) && !is_in('-', base))
	{
		while (fat != 0)
		{
			s[i] = base[fat % len];
			fat = fat / len;
			i = i + 1;
		}
		while (i > 0)
			ft_putchar(s[--i]);
	}
}
