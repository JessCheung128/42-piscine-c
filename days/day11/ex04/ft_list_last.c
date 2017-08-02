/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:17:09 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/19 18:43:50 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list		*atm;

	atm = begin_list;
	while (atm->next)
		atm = atm->next;
	return (atm);
}
