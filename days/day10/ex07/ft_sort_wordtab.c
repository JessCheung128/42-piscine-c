/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:19:04 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/19 16:27:33 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (*s1 - *s2);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[min], tab[i]) > 0)
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
