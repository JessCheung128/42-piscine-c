/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:42:42 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/20 16:27:02 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		min;
	int		i;
	char	*save;

	min = 0;
	i = 1;
	while (tab[min + 1] != 0)
	{
		while (tab[i] != 0)
		{
			if (cmp(tab[min], tab[i]) > 0)
			{
				save = tab[i];
				tab[i] = tab[min];
				tab[min] = save;
			}
			i = i + 1;
		}
		min = min + 1;
		i = min + 1;
	}
}
