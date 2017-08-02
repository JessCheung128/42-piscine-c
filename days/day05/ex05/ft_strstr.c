/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 16:43:18 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 13:49:12 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = str;
		j = to_find;
		while (*str != '\0' && *j != '\0' && *str == *j)
		{
			str++;
			j++;
		}
		if (!*j)
			return (i);
		str = i + 1;
	}
	return (0);
}
