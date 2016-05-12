/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 13:26:50 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/31 18:12:46 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tub;

	i = 0;
	tub = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		tub[i] = f(tab[i]);
		i++;
	}
	return (tub);
}
