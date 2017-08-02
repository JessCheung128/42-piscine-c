/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 13:01:50 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 15:52:47 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list		*ptr;

	if (*begin_list1)
	{
		ptr = *begin_list1;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
