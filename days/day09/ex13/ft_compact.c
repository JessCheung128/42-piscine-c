/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 05:43:52 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 06:45:22 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_null(char **tab, int length)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (i < length)
	{
		nb = tab[i] == 0 ? nb + 1 : nb;
		i = i + 1;
	}
	return (nb);
}

int		ft_find_next_null_place(char **tab, int length)
{
	int		i;

	i = length - 1;
	while (tab[i] == 0 && i >= 0)
	{
		i = i - 1;
	}
	return (i);
}

int		ft_find_first_null(char **tab, int length)
{
	int		i;

	i = 0;
	while (i < length && tab[i] != 0)
	{
		i = i + 1;
	}
	return (i);
}

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	int		iterations;
	int		moves;

	iterations = ft_count_null(tab, length);
	if (iterations == 0)
		return (length);
	i = 0;
	moves = 0;
	while (moves <= iterations)
	{
		i = ft_find_first_null(tab, length);
		j = ft_find_next_null_place(tab, length);
		tab[i] = tab[j];
		tab[j] = 0;
		moves = moves + 1;
	}
	return (length - iterations);
}
