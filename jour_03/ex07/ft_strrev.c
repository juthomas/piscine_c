/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 15:25:34 by juthomas          #+#    #+#             */
/*   Updated: 2015/10/16 19:25:38 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		beg;
	int		end;
	char	temp;

	i = 0;
	beg = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	end = i - 1;
	while (beg < i / 2)
	{
		temp = str[end];
		str[end] = str[beg];
		str[beg] = temp;
		beg++;
		end--;
	}
	return (str);
}
