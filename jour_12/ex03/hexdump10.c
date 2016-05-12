/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:26:55 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/14 18:43:10 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void		ft_putstr_end_right2(int u)
{
	u = 0;
	u = u - 1;
}

int			ft_strcmp_bu2(char *s1, char *s2, int u)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && i < u - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int			ft_strcmp_b162(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && i < 16)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

t_alamente	put_x_last32(t_alamente men)
{
	put_i_hexa2(men.i / 16 * 16);
	if ((men.i % 16) != 0)
	{
		if (men.i % 32 >= 16)
			ft_putstr_end_left2(men.tmp1, men.i);
		else
			ft_putstr_end_left2(men.tmp2, men.i);
		put_i_hexa2(men.i);
	}
	return (men);
}
