/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 01:10:32 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/06 17:31:12 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_pow(int nb, int pow)
{
	int		i;
	int		sum;

	i = 1;
	sum = nb;
	if (pow == 0)
		return (1);
	while (i < pow)
	{
		sum = sum * nb;
		i = i + 1;
	}
	return (sum);
}

void	ft_putnbr(int nb)
{
	unsigned int	save_nb;
	int				number_of_digits;
	int				actual_pow;
	int				x;

	if (nb < 0)
		ft_putchar('-');
	save_nb = nb < 0 ? nb * -1 : nb;
	number_of_digits = 0;
	while (save_nb != 0)
	{
		number_of_digits = number_of_digits + 1;
		save_nb = save_nb / 10;
	}
	actual_pow = number_of_digits - 1;
	save_nb = nb < 0 ? nb * -1 : nb;
	while (actual_pow >= 0)
	{
		x = ft_pow(10, actual_pow);
		ft_putchar(save_nb / x + 48);
		save_nb = save_nb % x;
		actual_pow = actual_pow - 1;
	}
}
