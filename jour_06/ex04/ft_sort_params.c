/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 22:04:47 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/20 12:19:31 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_machinage(int argc, char **argv)
{
	int		i;
	int		u;

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
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 2;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], argv[i - 1]) < 0)
		{
			tmp = argv[i];
			argv[i] = argv[i - 1];
			argv[i - 1] = tmp;
			i = 1;
		}
		i++;
	}
	ft_machinage(argc, argv);
	return (0);
}
