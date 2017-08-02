/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:08:34 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 16:25:01 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i = i + 1;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_join(char **tab, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char*)malloc(sizeof(char) * 1000);
	i = 0;
	j = 0;
	k = 0;
	while (tab[i] != 0)
	{
		if (tab[i][j] != '\0')
			str[k] = tab[i][j];
		else
		{
			ft_strcat(str, sep);
			k = k + ft_strlen(sep) - 1;
			i = i + 1;
			j = -1;
		}
		k = k + 1;
		j = j + 1;
	}
	str[k - ft_strlen(sep)] = '\0';
	return (str);
}
