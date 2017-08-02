/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 02:12:48 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 14:01:02 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_letter_uppercase(str[i]))
			str[i] = str[i] + 32;
		i = i + 1;
	}
	return (str);
}
