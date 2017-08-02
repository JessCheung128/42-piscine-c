/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:58:29 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 14:58:14 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list		*atm;

	atm = *begin_list;
	if (atm)
	{
		while (atm->next)
			atm = atm->next;
		atm->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
