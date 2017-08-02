/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 19:07:09 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/20 16:17:37 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*returns;

	i = 0;
	returns = malloc(sizeof(int) * length);
	while (i < length)
	{
		returns[i] = f(tab[i]);
		i = i + 1;
	}
	return (returns);
}
