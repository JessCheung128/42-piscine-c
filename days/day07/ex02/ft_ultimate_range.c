/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:00:17 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/18 02:20:01 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;
	int		*ptr;

	if (min >= max)
		return (0);
	i = 0;
	len = max - min;
	ptr = malloc(sizeof(int) * len);
	while (min < max)
	{
		ptr[i] = min;
		min = min + 1;
		i = i + 1;
	}
	*range = ptr;
	return (len);
}
