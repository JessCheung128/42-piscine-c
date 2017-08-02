/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 14:36:22 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 00:13:11 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int actual_char;

	actual_char = 0;
	while (str[actual_char] != '\0')
	{
		ft_putchar(str[actual_char]);
		actual_char = actual_char + 1;
	}
}
