/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:32:23 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 16:42:18 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_count_ones(int *tab, int length)
{
	int		val;
	int		i;

	i = 0;
	val = 0;
	while (i < length)
	{
		val = tab[i] == 1 ? val + 1 : val;
		i = i + 1;
	}
	return (val);
}

unsigned int	ft_active_bits(int value)
{
	int					bits[8];
	int					i;
	unsigned int		actives;

	i = 0;
	actives = 0;
	while (value != 0)
	{
		bits[i] = value % 2;
		value = value / 2;
		i = i + 1;
	}
	actives = ft_count_ones(bits, 8);
	return (actives);
}
