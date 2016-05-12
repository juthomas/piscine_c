/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 13:35:07 by juthomas          #+#    #+#             */
/*   Updated: 2016/02/12 17:16:58 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putnbr(int len, int nbr)
{
	if (len > 1)
		putnbr(len - 1, nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int		powa(int powa)
{
	int	nbr;

	nbr = 0;
	if (powa == 0)
		nbr = 1;
	if (powa == 1)
		nbr = 10;
	else if (powa == 2)
		nbr = 100;
	else if (powa == 3)
		nbr = 1000;
	else if (powa == 4)
		nbr = 10000;
	else if (powa == 5)
		nbr = 100000;
	else if (powa == 6)
		nbr = 1000000;
	else if (powa == 7)
		nbr = 10000000;
	else if (powa == 8)
		nbr = 100000000;
	else if (powa == 9)
		nbr = 1000000000;
	return (nbr);
}

int		tru(int nbr, int len, short logic, char *str)
{
	int		tmp;
	short	tru;

	tmp = -1;
	if (logic == 1)
	{
		len--;
		tru = 1;
		while (len >= 0 && tru == 1)
		{
			if (tmp < nbr / powa(len) % 10)
				tmp = nbr / powa(len) % 10;
			else
				tru = 0;
			len--;
		}
		return (tru);
	}
	else
	{
		while (str[++tmp] != '\0')
			ft_putchar(str[tmp]);
	}
	return (0);
}

void	recursiv_comb(int len, int nbrmax)
{
	int		max;
	int		i;
	short	first;

	first = 0;
	if (len == 9)
		max = 123456789;
	else if (len == 8)
		max = 23456789;
	else
		max = nbrmax;
	i = -1;
	while (++i <= max)
	{
		if (tru(i, len, 1, "ok"))
		{
			if (first)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			putnbr(len, i);
			first = 1;
		}
	}
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		if (n == 9)
		{
			tru(2, 3, 2, "012345678, 012345679, 012345689, 012345789,");
			tru(2, 3, 2, " 012346789, 012356789, ");
			tru(2, 3, 2, "012456789, 013456789, 023456789, 123456789");
		}
		else
			recursiv_comb(n, powa(n));
	}
}
