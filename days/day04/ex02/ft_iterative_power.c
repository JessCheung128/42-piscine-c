/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:57:28 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/09 17:11:25 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		sum;

	i = 1;
	sum = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		sum = sum * nb;
		i = i + 1;
	}
	return (sum);
}
