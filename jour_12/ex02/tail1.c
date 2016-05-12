/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:05:12 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/13 12:05:16 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

int		lseek_fait_maison(int fd, int x, int i, char *arv)
{
	int		moulinage;
	char	buffer;

	moulinage = i - x;
	close(fd);
	fd = open(arv, O_RDONLY);
	while (moulinage > 0)
	{
		read(fd, &buffer, 1);
		moulinage--;
	}
	return (fd);
}

void	ft_display2(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

void	illegal_truc(void)
{
	ft_putstr("tail: option requires an argument -- c\nusage");
	ft_putstr(": tail [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n");
}

void	bug_chelou(void)
{
	int		i;
	char	buffer;

	i = 0;
	while (read(0, &buffer, 1) != 0)
		i++;
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_display2();
	if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'c'
			&& argv[1][2] == '\0')
		illegal_truc();
	else if (argc == 3 && argv[1][0] == '-' && argv[1][1] == 'c'
			&& argv[1][2] == '\0' && error_nb(argv[2], "-c") != -10)
		bug_chelou();
	else if (argc == 3)
		illegal(argv);
	else
		ft_display(argc, argv);
	return (0);
}
