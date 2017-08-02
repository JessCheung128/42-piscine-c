/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 05:03:42 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/05 23:31:32 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchartab(char chars[], int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		ft_putchar(chars[i]);
		i = i + 1;
	}
}

void	ft_putseparator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	digits[1] = '1';
	digits[2] = '2';
	while (digits[0] <= '7')
	{
		ft_putchartab(digits, 3);
		if (digits[0] < '7')
			ft_putseparator();
		if (digits[1] < '8' && digits[2] >= '9')
		{
			digits[1]++;
			digits[2] = digits[1] + 1;
		}
		else if (digits[2] < '9')
			digits[2] = digits[2] + 1;
		else
		{
			digits[0]++;
			digits[1] = digits[0] + 1;
			digits[2] = digits[1] + 1;
		}
	}
}
