/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:06:38 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/15 12:25:19 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void		ft_display(int ac, char **av, t_alamente men)
{
	men.star = 0;
	men.fin = 0;
	men.i = 0;
	men.u = 2;
	while (men.u < ac && men.i >= 0)
	{
		if (men.u >= ac - 1)
			men.fin = 1;
		men.fd = open(av[men.u], O_RDONLY);
		if (men.fd >= 0 && men.i != 0)
			men = put_x_last(men);
		else if ((av[1][0] == '-' && av[1][1] == 'C') && ac >= 3 && men.i == 0
				&& men.fd >= 0 && av[1][2] == '\0')
			men = tiret_sai(men);
		else
		{
			error_msg(av[men.u], ac);
			if (men.fin == 1 && men.i > 0)
				putend(men);
		}
		close(men.fd);
		men.u++;
		if (men.i < 0)
			illegal(av);
	}
}

t_alamente	bug_voidt(t_alamente mena)
{
	{
		if (mena.i < 16 || ft_strcmp_bu(mena.tmp1, mena.tmp2, 16) != 0)
			put_i_hexa(mena.i - 15);
		if (mena.i > 16 && ft_strcmp_bu(mena.tmp1, mena.tmp2, 16) == 0)
		{
			if (mena.star != 1)
				write(1, "*\n", 2);
			mena.star = 1;
		}
		else
		{
			if ((mena.i) % 32 >= 16)
				ft_putstr_left(mena.tmp1);
			else
				ft_putstr_left(mena.tmp2);
			mena.star = 0;
		}
	}
	return (mena);
}

void		bug_void(void)
{
	t_alamente	mena;
	char		buffer;

	mena.star = 0;
	mena.i = 0;
	while (read(0, &buffer, 1) != 0)
	{
		if ((mena.i) % 32 >= 16)
			mena.tmp1[mena.i % 16] = buffer;
		else
			mena.tmp2[mena.i % 16] = buffer;
		if ((mena.i + 1) % 16 == 0)
		{
			mena = bug_voidt(mena);
		}
		mena.i++;
	}
}

int			main(int argc, char **argv)
{
	t_alamente	men;

	if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'C'
			&& argv[1][2] == '\0')
		bug_void();
	else if (argc == 1)
		bug_void2();
	else if (argc > 1 && argv[1][0] == '-' && argv[1][1] == 'C'
			&& argv[1][2] == '\0')
		ft_display(argc, argv, men);
	else
		ft_display2(argc, argv, men);
	return (0);
}
