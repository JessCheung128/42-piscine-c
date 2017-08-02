/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 03:46:22 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/14 04:08:14 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS "piscineux"
# include <string.h>

typedef struct		s_perso {
	char	*name;
	float	life;
	int		age;
	char	*profession;
}					t_perso;

#endif
