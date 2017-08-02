/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 15:30:19 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/12 21:20:56 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	long	nb;
	int		is_neg;

	i = 0;
	nb = 0;
	is_neg = 0;
	if (ft_strlen(str) > 0 && ft_strlen(base) > 1 && !has_samechar_twice(base)
			&& !is_in('+', base)
			&& !is_in('-', base))
	{
		is_neg = str[0] == '-' ? 1 : 0;
		i = is_neg || (str[i] == '+') ? i + 1 : i;
		while (i < ft_strlen(str))
		{
			if (!is_in(str[i], base))
				return (0);
			nb += (str[i] >= '0' && str[i] <= '9' ? str[i] - 48 : str[i] - 65)
				* ft_recursive_power(ft_strlen(base), ft_strlen(str) - i - 1);
			i = i + 1;
		}
	}
	else
		return (0);
	return (is_neg ? (int)nb * -1 : (int)nb);
}
