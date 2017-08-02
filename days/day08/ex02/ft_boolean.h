/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:49:07 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/18 01:54:42 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE 1
# define SUCCESS 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(nbr) ((nbr % 2) == 0 ? 1 : 0)
# include <unistd.h>

typedef	int	t_bool;

#endif
