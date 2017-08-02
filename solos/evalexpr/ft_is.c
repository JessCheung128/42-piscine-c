/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:27:13 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/22 13:47:48 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_operator(char c)
{
	return (c == '+' || c == '*' || c == '-' || c == '%' || c == '/');
}

int		ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_is_par(char c)
{
	return (c == '(' || c == ')');
}

int		ft_is_prio(char ope, char compared)
{
	if (ope == '*' || ope == '%' || ope == '*')
		return (!(compared == '*' || compared == '/' || compared == '/'));
	return (0);
}
