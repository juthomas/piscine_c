/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexdump.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juthomas <juthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 12:06:13 by juthomas          #+#    #+#             */
/*   Updated: 2015/12/16 10:17:05 by juthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEXDUMP_H
# define HEXDUMP_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef	struct		s_alamente
{
	char	tmp1[17];
	char	tmp2[17];
	int		u;
	int		i;
	char	buffer;
	int		star;
	int		b;
	int		nbr;
	int		fd;
	int		fin;
}					t_alamente;
void				ft_putstr(char *str);
void				ft_putchar(char c);
void				ft_putstr_left(char *str);
void				ft_putstr_right(char *str);
void				put_i_hexa(int i);
void				ft_putstr_end_left(char *str, int i);
void				ft_putstr_end_right(char *str, int i);
int					ft_strcmp(char *s1, char *s2);
t_alamente			put_x_last2(t_alamente men);
t_alamente			put_x_last(t_alamente men);
t_alamente			tiret_sai(t_alamente men);
void				error_msg(char *str, int ac);
void				illegal(char **av);
void				putend(t_alamente men);
void				ft_display(int ac, char **av, t_alamente men);
t_alamente			bug_voidt(t_alamente mena);
void				bug_void(void);
void				ft_putstr_error(char *str);
void				ft_puthexa_2cs(int i);
int					ft_strcmp_b16(char *s1, char *s2);
int					ft_strcmp_bu(char *s1, char *s2, int u);
t_alamente			put_x_last3(t_alamente men);
void				ft_putstr2(char *str);
void				ft_putchar2(char c);
void				ft_putstr_left2(char *str);
void				ft_putstr_right2(char *str);
void				put_i_hexa2(int i);
void				ft_putstr_end_left2(char *str, int i);
void				ft_putstr_end_right2(int u);
int					ft_strcmp2(char *s1, char *s2);
t_alamente			put_x_last22(t_alamente men);
t_alamente			put_x_last21(t_alamente men);
t_alamente			tiret_sai2(t_alamente men);
void				error_msg2(char *str, int ac);
void				illegal2(char **av);
void				putend2(t_alamente men);
void				ft_display2(int ac, char **av, t_alamente men);
t_alamente			bug_voidt2(t_alamente mena);
void				bug_void2(void);
void				ft_putstr_error2(char *str);
void				ft_puthexa_2cs2(int i);
int					ft_strcmp_b162(char *s1, char *s2);
int					ft_strcmp_bu2(char *s1, char *s2, int u);
t_alamente			put_x_last32(t_alamente men);
#endif
