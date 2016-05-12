/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 00:12:32 by juthomas          #+#    #+#             */
/*   Updated: 2015/11/07 00:30:13 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (root->left)
			btree_search_item(root->left, data_ref, (cmpf));
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		if (root->right)
			btree_search_item(root->right, data_ref, (cmpf));
	}
	return (NULL);
}
