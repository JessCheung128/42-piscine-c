/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:32:28 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/12 21:39:37 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (*s1 - *s2);
}

void	sort_that(char **tab, int len)
{
	int		min;
	int		i;
	char	*save;

	min = 1;
	i = 2;
	while (min < len - 1)
	{
		while (i < len)
		{
			if (ft_strcmp(tab[min], tab[i]) > 0)
			{
				save = tab[i];
				tab[i] = tab[min];
				tab[min] = save;
			}
			i = i + 1;
		}
		min = min + 1;
		i = min + 1;
	}
}

int		main(int argc, char *argv[])
{
	char	**tmp;
	int		i;

	tmp = argv;
	sort_that(tmp, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(tmp[i]);
		ft_putchar('\n');
		i = i + 1;
	}
	return (0);
}
