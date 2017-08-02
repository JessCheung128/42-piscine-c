/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:09:27 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/13 22:28:41 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lowletter(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_is_upletter(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	ft_to_rot42(char c)
{
	int		first;

	first = ft_is_lowletter(c) ? 'a' : 'A';
	return ((((c - first) + 42) % 26) + first);
}

char	*ft_rot42(char *str)
{
	int		i;
	char	*new;

	new = str;
	i = 0;
	while (new[i] != '\0')
	{
		if (ft_is_lowletter(new[i]) || ft_is_upletter(new[i]))
			new[i] = ft_to_rot42(new[i]);
		i = i + 1;
	}
	return (new);
}
