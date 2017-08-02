/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 17:29:18 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/22 17:53:20 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_replace(char *src, char *new, int from, int to)
{
	char	*replaced;
	int		i;
	int		j;
	int		len;

	replaced = malloc(sizeof(char) * 1000);
	i = 0;
	j = 0;
	while (i < from)
	{
		replaced[i] = src[i];
		i = i + 1;
	}
	while (j < ft_strlen(new))
	{
		replaced[i + j] = new[j];
	}
	len = ft_strlen(src) + (from - to + 1);
	while (src[len])
	{
		replaced[i + j] = src[len];
		j = j + 1;
		len = len + 1;
	}
	replaced[i + j] = '\0';
	return (replaced);
}
