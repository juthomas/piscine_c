/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:07:01 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/15 12:23:30 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void		ft_puthexa_2cs(int i)
{
	if (i < 0)
		i = 256 + i;
	ft_putchar((i / 16) % 16 + 48);
	ft_putchar((i % 16) + 48);
}

void		ft_putstr_end_left(char *str, int i)
{
	int		u;
	int		hex;

	hex = 0;
	u = 0;
	while (u < i % 16)
	{
		if (u == 0)
			write(1, "  ", 2);
		else if (u == 8)
			write(1, " ", 1);
		hex = str[u];
		ft_puthexa_2cs(hex);
		write(1, " ", 1);
		u++;
	}
	while (u < 16)
	{
		if (u == 8)
			write(1, " ", 1);
		write(1, "   ", 3);
		u++;
	}
	u = 0;
	ft_putstr_end_right(str, i);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

t_alamente	put_x_last2(t_alamente men)
{
	if ((men.i) % 32 >= 16)
		men.tmp1[men.i % 16] = men.buffer;
	else
		men.tmp2[men.i % 16] = men.buffer;
	if ((men.i + 1) % 16 == 0)
	{
		if (men.i < 16 || ft_strcmp_b16(men.tmp1, men.tmp2) != 0)
			put_i_hexa(men.i - 15);
		if (men.i > 16 && ft_strcmp_b16(men.tmp1, men.tmp2) == 0)
		{
			if (men.star != 1)
				write(1, "*\n", 2);
			men.star = 1;
		}
		else
		{
			if ((men.i) % 32 >= 16)
				ft_putstr_left(men.tmp1);
			else
				ft_putstr_left(men.tmp2);
			men.star = 0;
		}
	}
	return (men);
}

t_alamente	put_x_last(t_alamente men)
{
	men.b = 0;
	men.tmp1[16] = '\0';
	men.tmp2[16] = '\0';
	while (read(men.fd, &men.buffer, 1) != 0)
	{
		men = put_x_last2(men);
		men.i++;
	}
	if (men.fin != 0)
	{
		if (ft_strcmp_bu(men.tmp1, men.tmp2, men.i % 16) == 0
			&& (men.i % 16 != 0))
		{
			write(1, "*\n", 2);
			put_i_hexa(men.i);
		}
		else
			men = put_x_last3(men);
		write(1, "\n", 1);
	}
	return (men);
}
