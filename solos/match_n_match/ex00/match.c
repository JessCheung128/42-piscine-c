/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 23:16:18 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/17 11:26:08 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_valid_place(char *s1, int i, char *s2, int j)
{
	while (s1[i] != s2[j] && s1[i] != '\0')
	{
		i = i + 1;
	}
	if (s2[j] != '\0' && s2[j + 1] != '*')
	{
		if (s1[i] != '\0' && s1[i + 1] != s2[j + 1])
			return (ft_valid_place(s1, i + 1, s2, j));
	}
	return (i);
}

int		match(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while ((s1[i] == s2[j]) || (s2[j] == '*'))
	{
		if (s2[j] == '*')
		{
			while (s2[j] == '*')
				j = j + 1;
			i = ft_valid_place(s1, i, s2, j);
		}
		if ((s1[i] == s2[j]) && (s1[i] == '\0'))
			return (1);
		i = i + 1;
		j = j + 1;
	}
	return (0);
}
