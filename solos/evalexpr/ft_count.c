/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:27:13 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/22 16:32:42 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_digit(char c);
int		ft_is_operator(char c);

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_count_operators(char *str, int i, int j)
{
	int		ope;

	ope = 0;
	while (i < j && str[i])
	{
		ope = ft_is_operator(str[i]) ? ope + 1 : ope;
		i = i + 1;
	}
	return (ope);
}

int		ft_count_digits(char *str)
{
	int		i;
	int		digits;

	i = 0;
	digits = 0;
	while (str[i])
	{
		digits = ft_is_digit(str[i]) ? digits + 1 : digits;
		i = i + 1;
	}
	return (digits);
}

int		ft_count_par(char *str)
{
	int		i;
	int		par;

	i = 0;
	par = 0;
	while (str[i])
	{
		par = str[i] == '(' ? par + 1 : par;
		i = i + 1;
	}
	return (par);
}
