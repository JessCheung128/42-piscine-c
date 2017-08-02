/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 23:01:19 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 23:01:20 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int argc, char **argv)
{
	int i;
	int fd;

	if (argc >= 4)
	{
		i = 3;
		while (argv[i])
		{
			fd = open(argv[i], O_RDONLY, S_IRUSR);
			is_err(argv[i]);
			close(fd);
			if (i > 3 && (errno == 0))
				ft_putstr_new(STD_OUT, "\n");
			if (argc > 4 && (errno == 0))
			{
				ft_putstr_new(STD_OUT, "==> ");
				ft_putstr_new(STD_OUT, argv[i]);
				ft_putstr_new(STD_OUT, " <==\n");
			}
			ft_display_file(argv[i], ft_atoi(argv[2]), argv[2]);
			i++;
			errno = 0;
		}
	}
}
