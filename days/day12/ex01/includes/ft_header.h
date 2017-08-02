/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:09:47 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 13:29:55 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# define BUFFER 30000
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <errno.h>

int		ft_is_error(int error, char *arg);
void	ft_putstr_error(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_is_err(char *path);
int		ft_read_files(int argc, char **argv);
int		ft_read_stdout(void);

#endif
