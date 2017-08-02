/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 17:37:07 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 15:44:03 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list		*next;
	t_list		*atm;

	atm = *begin_list;
	while (atm)
	{
		next = atm->next;
		free(atm);
		atm = next;
	}
	*begin_list = NULL;
}
