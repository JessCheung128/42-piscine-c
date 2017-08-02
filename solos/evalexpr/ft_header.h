/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:26:24 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/22 16:25:55 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
char	*ft_itoa(int nbr);
int		ft_strlen(char *str);
int		ft_count_operators(char *str, int i, int j);
int		ft_count_digits(char *str);
int		ft_count_par(char *str);
int		ft_is_operator(char c);
int		ft_is_digit(char c);
int		ft_is_par(char c);
int		ft_is_prio(char ope, char compared);

#endif
