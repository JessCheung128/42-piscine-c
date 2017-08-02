/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 02:46:20 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 03:00:59 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		save;

	save = ***a;
	***a = *******c;
	*******c = save;
	save = ****d;
	****d = ***a;
	***a = save;
	save = ***a;
	***a = *b;
	*b = save;
}
