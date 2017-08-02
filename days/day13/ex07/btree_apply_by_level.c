/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 19:56:58 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 21:57:40 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_each_level(t_btree *root, int level,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (root)
	{
		applyf(root->item, level, level == 0);
		if (root->left)
			btree_apply_each_level(root->left, level + 1, applyf);
		if (root->right)
			btree_apply_each_level(root->right, level + 1, applyf);
	}
}

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	btree_apply_each_level(root, 0, applyf);
}
