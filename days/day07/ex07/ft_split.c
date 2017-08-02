/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:02:47 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/18 19:06:23 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i = i + 1;
	}
	return (0);
}

int		ft_find_next_word(char *str, int i, char *charset)
{
	while (ft_is_separator(str[i], charset) && str[i] != '\0')
		i = i + 1;
	return (i);
}

int		ft_count_words(char *str, char *charset)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		i = ft_find_next_word(str, i, charset);
		words = str[i] != '\0' ? words + 1 : words;
		while (!ft_is_separator(str[i], charset) && str[i] != '\0')
			i = i + 1;
	}
	return (words);
}

int		ft_length_actual_word(char *str, int i, char *charset)
{
	int		j;

	j = i;
	while (!ft_is_separator(str[j], charset) && str[j] != '\0')
		j = j + 1;
	return ((j - i) + 1);
}

char	**ft_split(char *str, char *charset)
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
	words = malloc(sizeof(char*) * ft_count_words(str, charset) + 1);
	while (j < ft_count_words(str, charset))
	{
		i = ft_find_next_word(str, i, charset);
		words[j] = malloc(sizeof(char) *
				(ft_length_actual_word(str, i, charset) + 1));
		while (!ft_is_separator(str[i], charset) && str[i] != '\0')
		{
			words[j][k++] = str[i++];
		}
		words[j++][k] = '\0';
		k = 0;
	}
	words[j] = 0;
	return (words);
}
