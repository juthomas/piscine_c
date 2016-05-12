/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:06:51 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/14 12:06:41 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

t_alamente	tiret_sai(t_alamente men)
{
	men = put_x_last(men);
	return (men);
}

void		ft_putstr_error(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void		error_msg(char *str, int ac)
{
	ft_putstr_error("hexdump: ");
	ft_putstr_error(str);
	ft_putstr_error(": No such file or directory\n");
	if (ac == 3)
	{
		ft_putstr_error("hexdump: ");
		ft_putstr_error(str);
		ft_putstr_error(": Bad file descriptor\n");
	}
}

void		illegal(char **av)
{
	ft_putstr("hexdump: illegal offset -- ");
	if (ft_strcmp(av[1], "-C") != 0)
		ft_putstr(&av[1][2]);
	else
		ft_putstr(av[2]);
	ft_putstr("\n");
}

void		putend(t_alamente men)
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
	write(1, "\n", 1);
}
