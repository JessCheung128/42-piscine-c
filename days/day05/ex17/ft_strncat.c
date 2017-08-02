/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 00:37:36 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 15:20:18 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*(str + length) != '\0')
	{
		length = length + 1;
	}
	return (length);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i = i + 1;
	}
	dest[len + i] = '\0';
	return (dest);
}
