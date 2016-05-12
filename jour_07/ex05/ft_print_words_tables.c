/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 12:43:53 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/29 18:54:45 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		u;

	i = 0;
	u = 0;
	while (tab[i] != 0)
	{
		while (tab[i][u] != '\0')
		{
			ft_putchar(tab[i][u]);
			u++;
		}
		ft_putchar('\n');
		u = 0;
		i++;
	}
}
