/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:07:12 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/13 12:07:23 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void		ft_putchar(char c)
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

void		ft_putstr_left(char *str)
{
	int		u;
	int		hex;

	hex = 0;
	u = 0;
	while (u < 16)
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
	ft_putstr_right(str);
}

void		ft_putstr_right(char *str)
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

void		put_i_hexa(int i)
{
	ft_putchar((((i) / 268435456) % 16) + 48);
	ft_putchar((((i) / 16777216) % 16) + 48);
	ft_putchar((((i) / 1048576) % 16) + 48);
	ft_putchar((((i) / 65536) % 16) + 48);
	ft_putchar((((i) / 4096) % 16) + 48);
	ft_putchar((((i) / 256) % 16) + 48);
	ft_putchar((((i) / 16) % 16) + 48);
	ft_putchar(((i) % 16) + 48);
}
