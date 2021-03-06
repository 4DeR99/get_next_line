/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:07:34 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/09 15:04:51 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin(char *s0, char *s1);
int		ft_strlen(char *c);
int		ft_strchr(char *str, int c);
char	*ft_strdup(char *s);
char	*get_next_line(int fd);

#endif