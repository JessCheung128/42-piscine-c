/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 19:24:57 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 21:52:48 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree		*atm;

	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	atm = *root;
	if (cmpf(item, atm->item) > 0)
	{
		if (atm->left)
			btree_insert_data(&atm->left, item, cmpf);
		else
			atm->left = btree_create_node(item);
	}
	else
	{
		if (atm->right)
			btree_insert_data(&atm->right, item, cmpf);
		else
			atm->right = btree_create_node(item);
	}
}
