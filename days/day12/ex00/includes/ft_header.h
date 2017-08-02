/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:09:47 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/21 14:32:39 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define BUFFER 4096
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

void	ft_putstr_error(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
