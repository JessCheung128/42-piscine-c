/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 04:43:56 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 05:32:44 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define FT_BOOL		int
# define TRUE			1
# define FALSE			0
# define OPEN			1
# define CLOSE			0
# define EXIT_SUCCESS	0

typedef struct		s_door {
	int		state;

}					t_door;

void				ft_putstr(char *str);
void				close_door(t_door *door);
void				open_door(t_door *door);
FT_BOOL				is_door_open(t_door *door);
FT_BOOL				is_door_close(t_door *door);

#endif
