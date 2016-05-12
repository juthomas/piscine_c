/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 01:58:56 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/18 11:23:00 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if ((nb == 0) || (nb == 1) || (nb < 0))
		return (0);
	while (nb % n != 0)
		n++;
	if (n == nb)
		return (1);
	else
		return (0);
}
