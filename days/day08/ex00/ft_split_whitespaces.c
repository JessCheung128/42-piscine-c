/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 10:48:13 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/18 18:51:49 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		ft_find_next_word(char *str, int i)
{
	while (ft_is_separator(str[i]) && str[i] != '\0')
		i = i + 1;
	return (i);
}

int		ft_count_words(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		i = ft_find_next_word(str, i);
		words = str[i] != '\0' ? words + 1 : words;
		while (!ft_is_separator(str[i]) && str[i] != '\0')
			i = i + 1;
	}
	return (words);
}

int		ft_length_actual_word(char *str, int i)
{
	int		j;

	j = i;
	while (!ft_is_separator(str[j]) && str[j] != '\0')
		j = j + 1;
	return ((j - i) + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!str)
		return (0);
	words = malloc(sizeof(char*) * ft_count_words(str) + 1);
	while (j < ft_count_words(str))
	{
		i = ft_find_next_word(str, i);
		words[j] = malloc(sizeof(char) * (ft_length_actual_word(str, i) + 1));
		while (!ft_is_separator(str[i]) && str[i] != '\0')
		{
			words[j][k++] = str[i++];
		}
		words[j++][k] = '\0';
		k = 0;
	}
	words[j] = 0;
	return (words);
}
