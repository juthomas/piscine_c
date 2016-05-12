/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 12:50:09 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/16 14:44:07 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int nb;

	nb = 0;
	while (nb <= 9899)
	{
		if ((nb / 100) < (nb % 100))
		{
			ft_putchar(((nb / 1000) % 10) + 48);
			ft_putchar(((nb / 100) % 10) + 48);
			ft_putchar(' ');
			ft_putchar(((nb / 10) % 10) + 48);
			ft_putchar((nb % 10) + 48);
			if (nb != 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		nb++;
	}
}
