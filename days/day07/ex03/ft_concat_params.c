/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:12:05 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/17 18:12:00 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		actual;
	int		len;

	len = ft_strlen(src);
	actual = 0;
	while (actual < len)
	{
		dest[actual] = src[actual];
		actual = actual + 1;
	}
	dest[actual] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		actual_word;
	int		len;
	char	*tmp;

	len = 0;
	i = 1;
	while (i < argc)
	{
		len = len + *argv[i];
		i = i + 1;
	}
	tmp = malloc(sizeof(char) * len);
	i = 0;
	actual_word = 1;
	while (actual_word < argc)
	{
		ft_strcpy(tmp + i, argv[actual_word]);
		i = i + ft_strlen(argv[actual_word]);
		tmp[i] = actual_word == argc - 1 ? '\0' : '\n';
		i = i + 1;
		actual_word = actual_word + 1;
	}
	return (tmp);
}
