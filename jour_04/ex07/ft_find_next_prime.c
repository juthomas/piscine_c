/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 01:12:02 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/18 11:25:43 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int n;

	if (nb <= 2)
		return (2);
	n = 2;
	while (nb != n)
	{
		while (nb % n != 0)
			n++;
		if (nb == n)
			return (nb);
		else
		{
			n = 2;
			nb++;
		}
	}
	return (-1);
}
