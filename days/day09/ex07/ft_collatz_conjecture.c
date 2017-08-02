/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:50:28 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 00:21:45 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_fly_time(unsigned int base, unsigned int actual)
{
	if (base == 1)
		return (actual);
	else if (base % 2 == 0)
		return (ft_fly_time(base / 2, actual + 1));
	return (ft_fly_time(base * 3 + 1, actual + 1));
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	return (ft_fly_time(base, 0));
}
