/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:10:36 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/17 23:17:26 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int			btree_level_count_if(t_btree *root)
{
	int		left;
	int		right;

	if (root == NULL)
		return (0);
	left = btree_level_count_if(root->left);
	right = btree_level_count_if(root->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

t_iterativ	*create_new(t_iterativ *par, t_btree *n, int first)
{
	t_iterativ		*q;

	q = malloc(sizeof(t_iterativ));
	q->node = n;
	if (first)
		q->is_first = 0;
	else
		q->is_first = 1;
	if (par)
		q->level = par->level + 1;
	else
		q->level = 0;
	return (q);
}

void		levelorder(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem), int *i, int *u)
{
	t_iterativ		**nxt;
	int				*tab;
	t_iterativ		*q;

	q = create_new(0, root, 0);
	tab = malloc(sizeof(int) * btree_level_count_if(root) * 10);
	nxt = malloc(sizeof(t_iterativ *) * btree_level_count_if(root) * 10);
	while (q)
	{
		applyf(q->node->item, q->level, q->is_first);
		if (q->node->left)
		{
			nxt[*i] = create_new(q, q->node->left, tab[q->level + 1]);
			*i += 1;
			tab[q->level + 1] = 1;
		}
		if (q->node->right)
		{
			nxt[*i] = create_new(q, q->node->right, tab[q->level + 1]);
			*i += 1;
			tab[q->level + 1] = 1;
		}
		q = nxt[*u];
		*u += 1;
	}
}

void		btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
		int current_level, int is_first_elem))
{
	int		i;
	int		u;

	i = 0;
	u = 0;
	levelorder(root, applyf, &i, &u);
}
