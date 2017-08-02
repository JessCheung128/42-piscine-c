/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:37:39 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 12:51:51 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
