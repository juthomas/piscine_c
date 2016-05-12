/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 23:45:30 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/29 19:42:07 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		taille_u(int argc, char **argv)
{
	int		i;
	int		j;
	int		taille;

	i = 1;
	taille = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			taille++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		taille += argc - 2;
	return (taille);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		taille;
	char	*str;

	taille = taille_u(argc, argv);
	str = (char*)malloc(sizeof(char) * (taille + 1));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
