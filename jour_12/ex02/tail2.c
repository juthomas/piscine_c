/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:05:21 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/13 12:05:26 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_atoi(char *str)
{
	int		nb;
	int		i;
	int		sg;

	nb = 0;
	i = 0;
	sg = 1;
	while ((str[i] == ' ') || (str[i] == '	'))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '+')
			sg *= -1;
		sg *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if ((str[i] > '9') || (str[i] < '0'))
			return (nb * sg);
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	return (nb * sg);
}

int		put_x_last(int fd, int x, int a, char *nom)
{
	char	buffer;
	int		i;

	if (a > 2)
		ft_putstr("\n");
	if (a > 2 || a == -1)
	{
		ft_putstr("==> ");
		ft_putstr(nom);
		ft_putstr(" <==\n");
	}
	a = 0;
	i = 0;
	while (read(fd, &buffer, 1) != 0)
		i++;
	if (x > i)
		x = i;
	fd = lseek_fait_maison(fd, x, i, nom);
	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		error_nb(char *av, char *tiret)
{
	int		eror;
	int		noob;

	noob = 0;
	eror = 0;
	while (av[eror] != '\0' && noob == 0)
	{
		if (av[eror] < '0' || av[eror] > '9')
			noob++;
		eror++;
	}
	if (noob != 0 || (ft_strcmp(tiret, "-c") != 0))
		eror = -10;
	return (eror);
}
