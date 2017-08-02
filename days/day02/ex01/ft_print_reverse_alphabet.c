/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 23:32:28 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/05 22:33:24 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'z';
	while (i < 26)
	{
		ft_putchar(c - i);
		i = i + 1;
	}
}
