/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 17:44:09 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/16 17:53:45 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int	nb;

	nb = 0;
	while (nb <= 999)
	{
		if ((nb / 100) < ((nb / 10) % 10) && ((nb / 10) % 10) < (nb % 10))
		{
			ft_putchar(((nb / 100) % 10) + 48);
			ft_putchar(((nb / 10) % 10) + 48);
			ft_putchar((nb % 10) + 48);
			if (nb != 789)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		nb++;
	}
}
