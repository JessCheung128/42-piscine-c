/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:10:47 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/09 23:25:12 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter_lowcase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int		is_letter_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		is_alphanumeric(char c)
{
	return (is_letter_lowcase(c) || is_letter_upcase(c)
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next_word;
	char	c;

	i = 0;
	next_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next_word && is_alphanumeric(c))
		{
			str[i] = is_letter_lowcase(c) ? c - 32 : str[i];
			next_word = 0;
		}
		else if (!next_word && is_letter_upcase(c))
			str[i] = c + 32;
		else if (!is_alphanumeric(c))
			next_word = 1;
		i = i + 1;
	}
	return (str);
}
