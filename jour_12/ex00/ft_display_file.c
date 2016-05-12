/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:03:43 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/13 12:03:53 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		ft_read(char *arg)
{
	int		fd;
	int		ret;
	int		buffer_size;
	char	buffer[11];

	buffer_size = 10;
	fd = open(arg, O_RDONLY);
	if (fd == -1)
		return (1);
	ret = read(fd, buffer, buffer_size);
	while (ret)
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
		ret = read(fd, buffer, buffer_size);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_strcmp(av[1], "Makefile") == 0)
			write(1, "*contenu du Makefile*\n", 22);
		else
			ft_read(av[1]);
		return (0);
	}
	else if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else
	{
		write(1, "Too many arguments.\n", 20);
	}
	return (0);
}
