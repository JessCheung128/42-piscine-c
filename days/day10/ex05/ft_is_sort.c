/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 19:16:48 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/19 19:42:43 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		croissant;
	int		decroissant;

	croissant = 1;
	decroissant = 1;
	if (length <= 2)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			croissant = 0;
		i = i + 1;
	}
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			decroissant = 0;
		i = i + 1;
	}
	return (croissant || decroissant ? 1 : 0);
}
