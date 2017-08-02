/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 20:14:59 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 13:30:42 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_read_files(int argc, char **argv)
{
	int		ret;
	int		fd;
	int		i;
	char	buffer[BUFFER + 1];

	i = 1;
	if (argc < 2)
		ft_read_stdout();
	while (i < argc)
	{
		fd = open(argv[i], O_RDWR, S_IRUSR);
		if (ft_is_error(errno, argv[i]) == 0)
		{
			while ((ret = read(fd, buffer, BUFFER)))
			{
				buffer[ret] = '\0';
				ft_putstr(buffer);
			}
			if (close(fd) == -1)
				return (1);
		}
		errno = 0;
		i = i + 1;
	}
	return (0);
}

int		ft_read_stdout(void)
{
	int		ret;
	char	buffer[BUFFER];
	char	test;

	read(0, &test, 1);
	if (test == 0)
		while (1)
		{
			ret = read(0, buffer, BUFFER);
			buffer[ret] = '\0';
			ft_putstr(buffer);
		}
	else
	{
		ft_putchar(test);
		while ((ret = read(0, buffer, BUFFER)))
		{
			buffer[ret] = '\0';
			ft_putstr(buffer);
		}
	}
	return (0);
}
