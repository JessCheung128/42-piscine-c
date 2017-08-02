/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:45:51 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/09 14:12:37 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;
	int		actual;

	result = 1;
	actual = 2;
	if (nb == 0)
		return (1);
	else if (nb < 0 || nb >= 13)
		return (0);
	while (actual <= nb)
	{
		result = result * actual;
		actual = actual + 1;
	}
	return (result);
}
