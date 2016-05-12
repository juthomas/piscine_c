/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:05:03 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/13 12:05:06 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAIL_H
# define TAIL_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		put_x_last(int fd, int x, int a, char *nom);
int		ft_strcmp(char *s1, char *s2);
int		error_nb(char *av, char *tiret);
int		tiret_sai(int fd, int u, char **av, int ac);
int		error_msg(char *str, char *av1, char *av2, char **av);
void	illegal(char **av);
void	ft_display(int ac, char **av);
void	ft_display2(void);
void	illegal_truc(void);
void	bug_chelou(void);
int		lseek_fait_maison(int fd, int x, int i, char *arv);

#endif
