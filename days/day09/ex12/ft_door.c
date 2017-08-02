/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 04:45:44 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 05:32:26 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i = i + 1;
	}
}

void		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

void		open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}

FT_BOOL		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state == OPEN);
}

FT_BOOL		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state == CLOSE);
}
