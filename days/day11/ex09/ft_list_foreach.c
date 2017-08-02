/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:04:29 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 15:47:34 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list)
		return ;
	while (begin_list->next)
	{
		f(begin_list->data);
		begin_list = begin_list->next;
	}
	f(begin_list->data);
}
