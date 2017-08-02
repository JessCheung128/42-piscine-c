/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 12:51:40 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 15:57:10 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*last;
	t_list		*current;
	t_list		*tmp;

	last = NULL;
	current = *begin_list;
	tmp = NULL;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
				*begin_list = current->next;
			else
				last->next = current->next;
			tmp = current;
			current = current->next;
			free(tmp);
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}
