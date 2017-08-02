/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 15:54:33 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 13:29:39 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_is_error(int error, char *arg)
{
	if (error == 2 || error == 20)
	{
		ft_putstr_error("cat: ");
		ft_putstr_error(arg);
		ft_putstr_error(": No such file or directory\n");
		return (1);
	}
	else if (error == 21)
	{
		ft_putstr_error("cat: ");
		ft_putstr_error(arg);
		ft_putstr_error(": Is a directory\n");
		return (1);
	}
	return (0);
}
