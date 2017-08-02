/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:50:43 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/19 18:02:59 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list		*new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->next = NULL;
		new->data = data;
	}
	return (new);
}
