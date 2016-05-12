/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:07:30 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/13 14:49:57 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void		ft_putstr_end_right(char *str, int i)
{
	int		u;

	u = 0;
	write(1, " |", 2);
	while (u < i % 16)
	{
		if (str[u] == '\n')
			write(1, ".", 1);
		else if (str[u] == '\t')
			write(1, ".", 1);
		else if (str[u] < 32 || str[u] > 126)
			write(1, ".", 1);
		else
			write(1, &str[u], 1);
		u++;
	}
	write(1, "|\n", 2);
}

int			ft_strcmp_bu(char *s1, char *s2, int u)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && i < u - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int			ft_strcmp_b16(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && i < 16)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

t_alamente	put_x_last3(t_alamente men)
{
	put_i_hexa(men.i / 16 * 16);
	if ((men.i % 16) != 0)
	{
		if (men.i % 32 >= 16)
			ft_putstr_end_left(men.tmp1, men.i);
		else
			ft_putstr_end_left(men.tmp2, men.i);
		put_i_hexa(men.i);
	}
	return (men);
}
