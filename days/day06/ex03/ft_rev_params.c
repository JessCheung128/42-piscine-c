/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:26:34 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 00:33:52 by akhercha         ###   ########.fr       */
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

int		main(int argc, char *argv[])
{
	int		i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i = i - 1;
	}
	return (0);
}
