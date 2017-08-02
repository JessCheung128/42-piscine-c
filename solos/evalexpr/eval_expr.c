/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:22:12 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/22 17:53:25 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_replace_by_nbr(char *str, int i, int j)
{
	char	*nbr;

	nbr = ft_calculate(str, i, j);
	str = ft_replace(str, nbr, i, //TODO)
 }

char	*ft_delete_allpar(char *str)
{
	int		iterations;
	int		counter;
	int		i;
	int		j;

	iterations = ft_count_par(str);
	counter = 0;
	i = 0;
	j = 0;
	while (iterations > 0)
	{
		counter = str[i] == '(' ? counter + 1 : counter;
		if (counter == iterations && str[i] == '(')
		{
			j = i;
			while (str[j] != ')')
				j++;
			ft_replace_by_nbr(str, i, j);
			ft_delete_all_par(str);
		}
	}
	return (str);
}
