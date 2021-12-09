/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:57:12 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/09 15:02:49 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin_bonus(char *s0, char *s1);
int		ft_strlen_bonus(char *c);
int		ft_strchr_bonus(char *str, int c);
char	*ft_strdup_bonus(char *s);
char	*get_next_line(int fd);

#endif