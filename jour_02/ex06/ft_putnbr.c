/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 13:12:24 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/17 11:02:16 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char	*str;
	int		i;

	i = 0;
	if (nb == -2147483648)
	{
		str = "-2147483648";
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}
