/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 14:45:21 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/26 15:38:36 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		u;
	char	*begin;

	u = 0;
	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		begin = &str[i];
		if (to_find[0] == '\0')
			return (begin);
		while (to_find[u] == str[i + u])
		{
			u++;
			if (to_find[u] == '\0')
				return (begin);
		}
		u = 0;
		i++;
	}
	begin = 0;
	return (begin);
}
