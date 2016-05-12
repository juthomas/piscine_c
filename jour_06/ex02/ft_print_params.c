/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 20:33:44 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/20 12:22:23 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int u;

	i = 0;
	u = 0;
	while (u < argc - 1)
	{
		while (argv[u + 1][i] != '\0')
		{
			ft_putchar(argv[u + 1][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		u++;
	}
	return (0);
}
