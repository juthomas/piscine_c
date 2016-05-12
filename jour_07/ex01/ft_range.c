/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 10:39:40 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/29 14:48:01 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		m;

	m = 0;
	if (min < max)
	{
		tab = malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			tab[m] = min;
			min++;
			m++;
		}
		return (tab);
	}
	else
		return (NULL);
}
