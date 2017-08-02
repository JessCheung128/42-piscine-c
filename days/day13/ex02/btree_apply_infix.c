/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 23:02:04 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 21:49:06 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		if (root->left)
			btree_apply_infix(root->left, applyf);
		applyf(root->item);
		if (root->right)
			btree_apply_infix(root->right, applyf);
	}
}
