/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:26:39 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/15 12:18:07 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

void		ft_display2(int ac, char **av, t_alamente men)
{
	men.star = 0;
	men.fin = 0;
	men.i = 0;
	men.u = 1;
	while (men.u < ac && men.i >= 0)
	{
		if (men.u >= ac - 1)
			men.fin = 1;
		men.fd = open(av[men.u], O_RDONLY);
		if (men.fd >= 0 && men.i != 0)
			men = put_x_last21(men);
		else if (ac >= 2 && men.i == 0
				&& men.fd >= 0)
			men = tiret_sai2(men);
		else
		{
			error_msg2(av[men.u], ac);
			if (men.fin == 1 && men.i > 0)
				putend2(men);
		}
		close(men.fd);
		men.u++;
		if (men.i < 0)
			illegal(av);
	}
}

t_alamente	bug_voidt2(t_alamente mena)
{
	{
		if ((mena.i < 16 || ft_strcmp_bu2(mena.tmp1, mena.tmp2, 16) != 0))
			put_i_hexa2(mena.i - 15);
		if ((mena.i > 16 && ft_strcmp_bu2(mena.tmp1, mena.tmp2, 16) == 0))
		{
			if (mena.star != 1)
				write(1, "*\n", 2);
			mena.star = 1;
		}
		else
		{
			if ((mena.i) % 32 >= 16)
				ft_putstr_left2(mena.tmp1);
			else
				ft_putstr_left2(mena.tmp2);
			mena.star = 0;
		}
	}
	return (mena);
}

void		bug_void2(void)
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
			mena = bug_voidt2(mena);
		}
		mena.i++;
	}
}
