/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_disp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 23:01:30 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 23:01:31 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_display_file(char *path, int nbr, char *str)
{
	int		fd;
	int		i;
	int		nb_car;
	int		ret;
	char	buf[2];

	i = 0;
	fd = open(path, O_RDWR, S_IRUSR);
	if (fd != -1 && (errno == 0 || errno == 9))
	{
		nb_car = ft_nbtoskip(nbr, ft_count_char(fd), str[0]);
		close(fd);
		fd = open(path, O_RDONLY, S_IRUSR);
		while (i < nb_car && (ret = read(fd, buf, 1)))
			i++;
		while ((ret = read(3, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr_new(STD_OUT, buf);
		}
	}
	close(fd);
}

void	ft_putstr_new(int output, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(output, &str[i], 1);
		i++;
	}
}

int		ft_nbtoskip(int nbr, int nb, char first_char)
{
	if (nbr < 0 || first_char == '-')
		return (nb + nbr);
	else if (first_char == '+')
		return (nbr);
	else
		return (nb - nbr);
}

int		ft_count_char(int fd)
{
	int		nb_car;
	int		ret;
	char	buf[2];

	nb_car = 0;
	while ((ret = read(fd, buf, 1)))
	{
		buf[ret] = '\0';
		nb_car++;
	}
	return (nb_car);
}

void	is_err(char *path)
{
	if (errno == 2)
	{
		ft_putstr_new(OUT_ERROR, "tail: ");
		ft_putstr_new(OUT_ERROR, path);
		ft_putstr_new(OUT_ERROR, ": No such file or directory\n");
	}
	if (errno == 20)
	{
		ft_putstr_new(OUT_ERROR, "tail: ");
		ft_putstr_new(OUT_ERROR, path);
		ft_putstr_new(OUT_ERROR, ": Not a directory\n");
	}
}
