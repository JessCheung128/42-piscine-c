/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:14:29 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 15:33:22 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		len;

	if (!begin_list)
		return (0);
	len = 1;
	while (begin_list->next)
	{
		len = len + 1;
		begin_list = begin_list->next;
	}
	return (len);
}
