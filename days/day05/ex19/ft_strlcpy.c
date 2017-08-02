/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:24:33 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 17:43:15 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*(str + length) != '\0')
	{
		length = length + 1;
	}
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				save;

	i = 0;
	j = 0;
	save = ft_strlen(src);
	if (size == 0)
		src = dest;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest[i] = '\0';
	return (save);
}
