/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:40:47 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 22:11:11 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	actual;

	actual = 0;
	while (actual < n && src[actual] != '\0')
	{
		dest[actual] = src[actual];
		actual = actual + 1;
	}
	if (actual < n)
	{
		dest[actual] = '\0';
		actual = actual + 1;
	}
	return (dest);
}
