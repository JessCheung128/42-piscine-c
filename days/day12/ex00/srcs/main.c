/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:06:43 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 14:35:20 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int		ret;
	int		fd;
	char	buffer[BUFFER + 1];

	if (argc != 2)
	{
		ft_putstr_error(argc == 1 ? "File name missing.\n" :
				"Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buffer, BUFFER)))
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
