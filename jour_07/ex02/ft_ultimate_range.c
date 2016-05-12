/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 21:57:33 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/29 15:52:47 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		m;
	int		n;

	m = 0;
	if (min < max)
	{
		tab = (int *)malloc(sizeof(int) * (max - min));
		if (tab == NULL)
			return (0);
		n = max - min;
		while (min < max)
		{
			tab[m] = min;
			min++;
			m++;
		}
		*range = tab;
		return (m);
	}
	else
	{
		range = NULL;
		return (0);
	}
}
