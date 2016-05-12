/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump7.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:26:44 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/15 11:52:26 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

t_alamente	tiret_sai2(t_alamente men)
{
	men = put_x_last21(men);
	return (men);
}

void		ft_putstr_error2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void		error_msg2(char *str, int ac)
{
	ft_putstr_error2("hexdump: ");
	ft_putstr_error2(str);
	ft_putstr_error2(": No such file or directory\n");
	if (ac == 2)
	{
		ft_putstr_error2("hexdump: ");
		ft_putstr_error2(str);
		ft_putstr_error2(": Bad file descriptor\n");
	}
}

void		illegal2(char **av)
{
	ft_putstr2("hexdump: illegal offset -- ");
	if (ft_strcmp2(av[1], "-C") != 0)
		ft_putstr2(&av[1][2]);
	else
		ft_putstr2(av[2]);
	ft_putstr2("\n");
}

void		putend2(t_alamente men)
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
	write(1, "\n", 1);
}
