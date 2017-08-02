/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 14:20:34 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/22 17:29:13 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_find_coor(char *str, int i, int j)
{
	int		**coor;

	coor = malloc(sizeof(int*) * 2);
	coor[0] = malloc(sizeof(int) * 2);
	coor[1] = malloc(sizeof(int) * 2);
	while (str[i] && !ft_is_digit(str[i]))
		i = i + 1;
	coor[0][0] = i;
	while (str[i] && ft_is_digit(str[i]))
		i = i + 1;
	coor[0][1] = i;
	while (str[i] && !ft_is_digit(str[i]))
		i = i + 1;
	coor[1][0] = i;
	while (str[i] && ft_is_digit(str[i]))
		i = i + 1;
	coor[1][1] = i;
	return (coor);
}

char	*ft_assign(char *dest, char *src, int i, int j)
{
	int		act;

	act = 0;
	dest = malloc(sizeof(char) * (j - i + 1));
	while (src[i] && i < j)
	{
		dest[act] = src[i];
		i = i + 1;
		act = act + 1;
	}
	return (dest);
}

char	*ft_value(char *a, char *b, char op)
{
	int		result;

	if (op == '+')
		result = (ft_atoi(a) + ft_atoi(b));
	else if (op == '-')
		result = (ft_atoi(a) - ft_atoi(b));
	else if (op == '/')
		result = (ft_atoi(a) / ft_atoi(b));
	else if (op == '%')
		result = (ft_atoi(a) % ft_atoi(b));
	else if (op == '*')
		result = (ft_atoi(a) * ft_atoi(b));
	return (ft_itoa(result));
}

char	*ft_calculate(char *str, int i, int j)
{
	int		**coor;
	char	*a;
	char	*b;
	char	op;
	char	*result;

	coor = ft_find_coor(str, i, j);
	while (str[i] && !ft_is_operator(str[i]))
		i = i + 1;
	op = str[i];
	a = ft_assign(a, str, coor[0][0], coor[0][1]);
	b = ft_assign(b, str, coor[1][0], coor[1][1]);
	free(coor);
	return (ft_value(a, b, op));
}
