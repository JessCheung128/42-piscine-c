/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:35:24 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/06 14:35:26 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	save_div;
	int	save_rest;

	save_div = *a / *b;
	save_rest = *a % *b;
	*a = save_div;
	*b = save_rest;
}
