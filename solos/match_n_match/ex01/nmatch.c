/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:49:57 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/15 23:23:46 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2);

char	*ft_ignore_stars(char *str)
{
	while (*str == '*')
		str = str + 1;
	return (str);
}

int		ft_match(char **s1, char *s2)
{
	int		matches;

	matches = 0;
	while (**s1)
	{
		matches = matches + nmatch(*s1, s2);
		*s1 = *s1 + 1;
	}
	return (matches);
}

int		ft_has_same_char(char **s1, char **s2)
{
	if (**s1 == **s2)
	{
		*s1 = *s1 + 1;
		*s2 = *s2 + 1;
		return (1);
	}
	return (0);
}

int		nmatch(char *s1, char *s2)
{
	int	matches;

	matches = 0;
	while (*s1)
	{
		if (*s2 == '*')
			matches += ft_match(&s1, ++s2);
		else if (!ft_has_same_char(&s1, &s2))
			return (matches);
	}
	s2 = ft_ignore_stars(s2);
	return (matches + !*s2);
}
