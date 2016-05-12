/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 20:44:58 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/20 12:21:03 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int u;

	i = 0;
	u = argc - 1;
	while (u > 0)
	{
		while (argv[u][i] != '\0')
		{
			ft_putchar(argv[u][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		u--;
	}
	return (0);
}
