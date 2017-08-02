/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 08:04:18 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/06 00:41:06 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnumber(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
	else
	{
		ft_putchar((n / 10) + 48);
		ft_putchar((n % 10) + 48);
	}
}

void	ft_putseparator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	left_number;
	int	right_number;

	left_number = 0;
	right_number = 1;
	while (left_number <= 98)
	{
		ft_putnumber(left_number);
		ft_putchar(' ');
		ft_putnumber(right_number);
		if (left_number != 98)
			ft_putseparator();
		if (right_number < 99)
			right_number++;
		else
		{
			left_number++;
			right_number = left_number + 1;
		}
	}
}
