/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 13:47:44 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 15:53:41 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		len;
	t_list	*atm;

	len = 1;
	atm = begin_list;
	while (atm->next)
	{
		len = len + 1;
		atm = atm->next;
	}
	return (len);
}

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (i < nbr && begin_list->next)
	{
		begin_list = begin_list->next;
		i = i + 1;
	}
	return (i == nbr ? begin_list : 0);
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		i;
	int		j;
	void	*save;

	i = 0;
	j = 1;
	if (!*begin_list)
		return ;
	while (i < ft_list_size(*begin_list) - 1)
	{
		while (j < ft_list_size(*begin_list))
		{
			if (cmp(ft_list_at(*begin_list, i)->data,
						ft_list_at(*begin_list, j)->data) > 0)
			{
				save = ft_list_at(*begin_list, i)->data;
				ft_list_at(*begin_list, i)->data =
					ft_list_at(*begin_list, j)->data;
				ft_list_at(*begin_list, j)->data = save;
			}
			j = j + 1;
		}
		i = i + 1;
		j = i + 1;
	}
}
