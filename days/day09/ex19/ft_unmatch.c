/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:23:01 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 15:58:16 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_same(int *tab, int length, int nb)
{
	int		i;
	int		total;

	i = 0;
	total = 0;
	while (i < length)
	{
		total = tab[i] == nb ? total + 1 : total;
		i = i + 1;
	}
	return (total);
}

int		ft_unmatch(int *tab, int length)
{
	int		i;

	i = 0;
	while (i < length)
	{
		if (ft_count_same(tab, length, tab[i]) % 2 != 0)
			return (tab[i]);
		i = i + 1;
	}
	return (0);
}
