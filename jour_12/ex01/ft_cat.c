/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:04:31 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/13 12:04:37 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_display(int ac, char **av)
{
	int		fd;
	int		u;
	char	buffer;

	u = 1;
	while (u < ac)
	{
		fd = open(av[u], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &buffer, 1) != 0)
				write(1, &buffer, 1);
		}
		else
		{
			ft_putstr("cat: ");
			ft_putstr(av[u]);
			ft_putstr(": No such file or directory\n");
		}
		close(fd);
		u++;
	}
}

void	ft_display2(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int ac, char **av)
{
	if (ac < 2 || av[1][0] == '-')
		ft_display2();
	ft_display(ac, av);
	return (0);
}
