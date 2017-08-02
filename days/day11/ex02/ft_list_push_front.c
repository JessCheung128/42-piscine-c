/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:10:48 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 12:14:04 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*new;

	new = ft_create_elem(data);
	if (new)
		new->next = *begin_list;
	*begin_list = new;
}
