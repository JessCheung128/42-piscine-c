/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 01:52:11 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/19 14:26:13 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dup;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	dup = (char*)malloc(sizeof(*dup) * (size + 1));
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_par) * (ac + 2));
	while (i < ac)
	{
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		i = i + 1;
	}
	tab[i].str = 0;
	tab[i].size_param = 0;
	return (tab);
}
