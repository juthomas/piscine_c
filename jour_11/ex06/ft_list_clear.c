/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 14:11:10 by juthomas          #+#    #+#             */
/*   Updated: 2015/11/05 14:11:14 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*tmp_bis;

	if (*begin_list)
	{
		tmp = *begin_list;
		while (tmp)
		{
			tmp_bis = tmp->next;
			free(tmp);
			tmp = tmp_bis;
		}
		*begin_list = NULL;
	}
}
