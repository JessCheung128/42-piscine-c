/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 13:16:45 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/12 13:41:41 by akhercha         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		length;
	char	*copy;

	length = ft_strlen(src) + 1;
	if (!(copy = (char *)malloc(sizeof(*copy) * (length))))
		return (0);
	ft_strcpy(copy, src);
	return (copy);
}
