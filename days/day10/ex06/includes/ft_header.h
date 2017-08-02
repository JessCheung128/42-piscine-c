/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:03:36 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/19 16:09:29 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

int				ft_add(int a, int b);
int				ft_minus(int a, int b);
int				ft_mult(int a, int b);
int				ft_divided(int a, int b);
int				ft_modulo(int a, int b);
int				ft_atoi(char *str);
int				ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);

typedef int		(*t_operations)	(int, int);

#endif
