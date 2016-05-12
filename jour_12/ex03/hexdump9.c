/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump9.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:26:51 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/15 12:26:18 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void		ft_putstr2(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void		ft_putchar2(char c)
{
	if (c == 58)
		write(1, "a", 1);
	else if (c == 59)
		write(1, "b", 1);
	else if (c == 60)
		write(1, "c", 1);
	else if (c == 61)
		write(1, "d", 1);
	else if (c == 62)
		write(1, "e", 1);
	else if (c == 63)
		write(1, "f", 1);
	else
		write(1, &c, 1);
}

void		ft_putstr_left2(char *str)
{
	int		u;

	u = 0;
	while (u < 16)
	{
		write(1, " ", 1);
		ft_puthexa_2cs2(str[u]);
		u++;
	}
	write(1, "\n", 1);
}

void		ft_putstr_right2(char *str)
{
	int		u;

	u = 0;
	write(1, " |", 2);
	while (u < 16)
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

void		put_i_hexa2(int i)
{
	ft_putchar((((i) / 16777216) % 16) + 48);
	ft_putchar((((i) / 1048576) % 16) + 48);
	ft_putchar((((i) / 65536) % 16) + 48);
	ft_putchar((((i) / 4096) % 16) + 48);
	ft_putchar((((i) / 256) % 16) + 48);
	ft_putchar((((i) / 16) % 16) + 48);
	ft_putchar(((i) % 16) + 48);
}
