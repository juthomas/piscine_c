/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 14:14:22 by juthomas          #+#    #+#             */
/*   Updated: 2015/11/06 17:01:49 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list1;
	t_list	*list2;
	void	*data_tmp;

	list1 = *begin_list;
	while (list1)
	{
		list2 = list1->next;
		while (list2)
		{
			if ((*cmp)(list1->data, list2->data) > 0)
			{
				data_tmp = list1->data;
				list1->data = list2->data;
				list2->data = data_tmp;
			}
			list2 = list2->next;
		}
		list1 = list1->next;
	}
}
