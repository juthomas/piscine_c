/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:05:33 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/13 12:05:38 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

int		tiret_sai(int fd, int u, char **av, int ac)
{
	int		i;
	int		error;
	int		nbr;

	nbr = 0;
	i = 0;
	error = error_nb(av[2], av[1]);
	if (error < -5)
		nbr = -42;
	else if (error > 8)
		nbr = 2143432435;
	else
		nbr = ft_atoi(av[2]);
	close(fd);
	fd = open(av[3], O_RDONLY);
	if (ac == 4 && u > 0)
		ac = 2;
	else
		ac = -1;
	if (nbr > 0)
		put_x_last(fd, nbr, ac, av[3]);
	return (nbr);
}

int		error_msg(char *str, char *av1, char *av2, char **av)
{
	if (error_nb(av2, av1) > 0)
	{
		ft_putstr("tail: ");
		ft_putstr(str);
		ft_putstr(": No such file or directory\n");
	}
	else
		illegal(av);
	return (3);
}

void	illegal(char **av)
{
	ft_putstr("tail: illegal offset -- ");
	if (ft_strcmp(av[1], "-c") != 0)
		ft_putstr(&av[1][2]);
	else
		ft_putstr(av[2]);
	ft_putstr("\n");
}

void	ft_display(int ac, char **av)
{
	int		o;
	int		fd;
	int		u;
	int		i;

	o = 0;
	u = 3;
	while (u < ac && o >= 0)
	{
		fd = open(av[u], O_RDONLY);
		if (fd >= 0 && o != 0)
			put_x_last(fd, o, i, av[u]);
		else if ((av[1][0] == '-' && av[1][1] == 'c') && ac >= 4 && o == 0
				&& fd >= 0)
			o = tiret_sai(fd, u, av, ac);
		else
			i = error_msg(av[u], av[1], av[2], av);
		close(fd);
		u++;
		if (o < 0)
			illegal(av);
		if (o != 0 && u < 5)
			i = 4;
	}
}
