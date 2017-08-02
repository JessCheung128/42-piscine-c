/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:43:24 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 02:32:39 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i = i + 1;
	}
}

int		ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'));
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i = i + 1;
	}
	return (str);
}

int		ft_are_equals(char *s1, char *s2, int s1_index)
{
	int s2_index;

	s2_index = 0;
	while (s2[s2_index] == s1[s1_index])
	{
		if (s2[s1_index] == '\0')
			return (1);
		s2_index = s2_index + 1;
		s1_index = s1_index + 1;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (!ft_is_alpha(argv[i][j]))
		{
			j = j + 1;
		}
		if (ft_are_equals(ft_strlowcase(argv[i]), "president", j)
				|| ft_are_equals(ft_strlowcase(argv[i]), "attack", j)
				|| ft_are_equals(ft_strlowcase(argv[i]), "powers", j))
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		i = i + 1;
		j = 0;
	}
	return (0);
}
