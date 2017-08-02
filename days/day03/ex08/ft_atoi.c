/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 08:57:16 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/08 15:12:34 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_begin(char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
		i = i + 1;
	}
	return (i);
}

int		ft_nb_digits(char *str, int start)
{
	int		i;

	i = start;
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '+' || str[i] == '-')
	{
		i = i + 1;
	}
	return (i - start);
}

int		ft_atoi(char *str)
{
	int		number;
	int		start_position;
	int		digits_number;
	int		is_negative;

	number = 0;
	is_negative = 0;
	start_position = ft_begin(str);
	digits_number = ft_nb_digits(str, start_position);
	digits_number = digits_number - 1;
	if (str[start_position] == '+' || str[start_position] == '-')
	{
		is_negative = str[start_position] == '-' ? 1 : 0;
		start_position = start_position + 1;
		digits_number = digits_number - 1;
	}
	while (digits_number >= 0
			&& (str[start_position] >= '0' && str[start_position] <= '9'))
	{
		number = 10 * number + (str[start_position] - '0');
		digits_number = digits_number - 1;
		start_position = start_position + 1;
	}
	return (is_negative ? number * -1 : number);
}
