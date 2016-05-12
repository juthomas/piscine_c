/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 22:42:31 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/29 19:37:37 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			malloc_u(char *str, char *charset)
{
	int		i;
	int		u;

	u = 0;
	i = 0;
	while (str[i] != ' ' && str[i] != '	' && str[i] != '\n' && str[i] != '\0')
		i++;
	while (charset[u] != '\0')
	{
		u++;
		i++;
	}
	return (i + 1);
}

int			malloc_ouille(char *str)
{
	int		u;
	int		i;

	i = 0;
	u = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
			u++;
		i++;
	}
	return (u + 1);
}

char		**ft_truc_charset(int *b, char **tab, char *charset)
{
	while (charset[b[3]] != '\0')
	{
		tab[b[1]][b[2]] = charset[b[3]];
		b[2]++;
		b[3]++;
	}
	tab[b[1]][b[2]] = '\0';
	return (tab);
}

char		**ft_split_chelou(int *b, char **tab, char *str, char *charset)
{
	while (str[b[0]] != '\0')
	{
		tab[b[1]] = malloc(sizeof(char) * malloc_u(&str[b[0]], charset));
		while (str[b[0]] == ' ' || str[b[0]] == '	' || str[b[0]] == '\n')
			b[0]++;
		while (str[b[0]] != ' ' && str[b[0]] != '	' && str[b[0]] != '\n'
				&& str[b[0]] != '\0')
		{
			tab[b[1]][b[2]] = str[b[0]];
			b[0]++;
			b[2]++;
		}
		tab = ft_truc_charset(b, tab, charset);
		b[3] = 0;
		b[2] = 0;
		b[1]++;
		if (str[b[0]] != '\0')
			b[0]++;
	}
	tab[b[1]] = 0;
	return (tab);
}

char		**ft_split(char *str, char *charset)
{
	int		b[4];
	char	**tab;

	tab = malloc(sizeof(char*) * malloc_ouille(str));
	b[0] = 0;
	b[1] = 0;
	b[2] = 0;
	b[3] = 0;
	tab = ft_split_chelou(b, tab, str, charset);
	return (tab);
}
