/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 19:42:12 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/25 21:55:03 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left)
			btree_search_item(root->left, data_ref, cmpf);
		if (cmpf(data_ref, root->item) == 0)
			return (root->item);
		if (root->right)
			btree_search_item(root->right, data_ref, cmpf);
	}
	return (NULL);
}
