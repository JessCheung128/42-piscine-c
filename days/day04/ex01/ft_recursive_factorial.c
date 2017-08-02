/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:24:17 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/09 14:14:14 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 1 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0)
		return (1);
	return (0);
}
