/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump8.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:26:47 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/15 12:27:18 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void		ft_puthexa_2cs2(int i)
{
	if (i < 0)
		i = 256 + i;
	ft_putchar2((i / 16) % 16 + 48);
	ft_putchar2((i % 16) + 48);
}

void		ft_putstr_end_left2(char *str, int i)
{
	int		u;

	u = 0;
	while (u < i % 16)
	{
		write(1, " ", 1);
		ft_puthexa_2cs2(str[u]);
		u++;
	}
	while (u < 16)
	{
		write(1, "   ", 3);
		u++;
	}
	write(1, "\n", 1);
}

int			ft_strcmp2(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

t_alamente	put_x_last22(t_alamente men)
{
	if ((men.i) % 32 >= 16)
		men.tmp1[men.i % 16] = men.buffer;
	else
		men.tmp2[men.i % 16] = men.buffer;
	if ((men.i + 1) % 16 == 0)
	{
		if (men.i < 16 || ft_strcmp_b162(men.tmp1, men.tmp2) != 0)
			put_i_hexa2(men.i - 15);
		if (men.i > 16 && ft_strcmp_b162(men.tmp1, men.tmp2) == 0)
		{
			if (men.star != 1)
				write(1, "*\n", 2);
			men.star = 1;
		}
		else
		{
			if ((men.i) % 32 >= 16)
				ft_putstr_left2(men.tmp1);
			else
				ft_putstr_left2(men.tmp2);
			men.star = 0;
		}
	}
	return (men);
}

t_alamente	put_x_last21(t_alamente men)
{
	men.b = 0;
	men.tmp1[16] = '\0';
	men.tmp2[16] = '\0';
	while (read(men.fd, &men.buffer, 1) != 0)
	{
		men = put_x_last22(men);
		men.i++;
	}
	if (men.fin != 0)
	{
		if (ft_strcmp_bu2(men.tmp1, men.tmp2, men.i % 16) == 0
				&& (men.i % 16 != 0))
		{
			write(1, "*\n", 3);
			put_i_hexa2(men.i);
		}
		else
			men = put_x_last32(men);
		write(1, "\n", 1);
	}
	return (men);
}
