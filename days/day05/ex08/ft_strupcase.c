/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 21:07:30 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/11 14:04:01 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_letter_lowercase(str[i]))
			str[i] = str[i] - 32;
		i = i + 1;
	}
	return (str);
}
