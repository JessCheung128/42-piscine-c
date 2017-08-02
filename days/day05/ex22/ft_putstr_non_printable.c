/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:36:36 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/12 12:46:54 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i = i + 1;
	}
	return (1);
}

void	ft_print_hex(int nbr)
{
	char	*base;
	char	s[1000];
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (nbr < 16)
		ft_putchar('0');
	while (nbr != 0)
	{
		s[i] = base[nbr % 16];
		nbr = nbr / 16;
		i = i + 1;
	}
	while (i >= 0)
	{
		ft_putchar(s[i]);
		i = i - 1;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		ascii_code;

	i = 0;
	while (str[i] != '\0')
	{
		ascii_code = str[i];
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_putchar('\\');
			ft_print_hex(ascii_code);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i = i + 1;
	}
	ft_putchar('\n');
}
