/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 19:48:54 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 21:56:27 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		ft_max(int a, int b)
{
	return (a > b ? a : b);
}

int		btree_level_counter(t_btree *root, int level)
{
	if (!root)
		return (level);
	return (ft_max(btree_level_counter(root->left, level + 1),
	btree_level_counter(root->right, level + 1)));
}

int		btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (btree_level_counter(root, 0));
}
