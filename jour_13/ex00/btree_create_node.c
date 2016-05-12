/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 21:32:28 by juthomas          #+#    #+#             */
/*   Updated: 2015/11/06 21:39:05 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *btree;

	btree = malloc(sizeof(t_btree));
	if (btree)
	{
		btree->item = item;
		btree->left = NULL;
		btree->right = NULL;
	}
	return (btree);
}
