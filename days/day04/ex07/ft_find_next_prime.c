/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:10:31 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/09 13:28:38 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	nb = nb < 0 ? 0 : nb;
	while (!ft_is_prime(nb))
	{
		nb = nb + 1;
	}
	return (nb);
}
