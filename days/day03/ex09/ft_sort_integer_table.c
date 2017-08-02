/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:13:49 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/07 13:35:59 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		min;
	int		save;

	min = 0;
	i = min + 1;
	while (min < size - 1)
	{
		while (i < size)
		{
			if (*(tab + i) < *(tab + min))
			{
				save = *(tab + i);
				*(tab + i) = *(tab + min);
				*(tab + min) = save;
			}
			i = i + 1;
		}
		min = min + 1;
		i = min + 1;
	}
}
