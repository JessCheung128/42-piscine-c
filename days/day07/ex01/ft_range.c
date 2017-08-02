/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 13:42:29 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/17 11:46:48 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		len;

	if (min >= max)
		return (0);
	len = max - min;
	tab = (int *)malloc(sizeof(*tab) * (len));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i = i + 1;
		min = min + 1;
	}
	return (tab);
}
