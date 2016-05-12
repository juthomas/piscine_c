/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 22:00:39 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/17 23:16:48 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) <= 0)
	{
		if ((*root)->right == 0)
		{
			(*root)->right = btree_create_node(item);
			return ;
		}
		else
			btree_insert_data(&((*root)->right), item, cmpf);
	}
	else
	{
		if (!(*root)->item)
		{
			(*root)->item = item;
			return ;
		}
		btree_insert_data(&((*root)->left), item, cmpf);
	}
}
