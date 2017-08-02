/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 19:53:28 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 00:44:02 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list		*atm;
	t_list		*new;

	atm = *begin_list;
	new = ft_create_elem(data);
	if (!atm || cmp(data, atm->data) < 0)
	{
		*begin_list = new;
		new->next = atm ? atm : NULL;
		return ;
	}
	while (atm->next)
	{
		if (cmp(data, atm->data) > 0 && cmp(data, (atm->next)->data) <= 0)
		{
			new->next = atm->next;
			atm->next = new;
			return ;
		}
		atm = atm->next;
	}
	atm->next = new;
}
