/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:47:00 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/09 15:04:42 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*second_part(char *keep)
{
	char	*new_keep;
	int		i;
	int		j;

	i = 0;
	while (keep[i] && keep[i] != '\n')
		i++;
	if (!keep[i])
		return (free(keep), NULL);
	new_keep = (char *)malloc(ft_strlen_bonus(keep) - i);
	if (!new_keep)
		return (NULL);
	i++;
	j = 0;
	while (keep[i])
		new_keep[j++] = keep[i++];
	new_keep[j] = '\0';
	return (free(keep), new_keep);
}

char	*firs_part(char *keep)
{
	char	*next_line;
	int		i;

	i = 0;
	if (!*keep)
		return (NULL);
	while (keep[i] && keep[i] != '\n')
		i++;
	next_line = (char *)malloc(i + 2);
	if (!next_line)
		return (NULL);
	i = 0;
	while (keep[i] && keep[i] != '\n')
	{
		next_line[i] = keep[i];
		i++;
	}
	if (keep[i] == '\n')
		next_line[i++] = '\n';
	next_line[i] = '\0';
	return (next_line);
}

char	*add_buffer(int fd, char *keep)
{
	char	*tmp;
	int		c;

	tmp = (char *)malloc(BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	c = 1;
	while (ft_strchr_bonus(keep, '\n') && c)
	{
		c = read(fd, tmp, BUFFER_SIZE);
		if (c == -1)
			return (free(tmp), NULL);
		tmp[c] = '\0';
		keep = ft_strjoin_bonus(keep, tmp);
	}
	return (free(tmp), keep);
}

char	*get_next_line(int fd)
{
	static char	*keep[65535];
	char		*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (ft_strchr_bonus(keep[fd], '\n'))
		keep[fd] = add_buffer(fd, keep[fd]);
	if (!keep[fd])
		return (NULL);
	next_line = firs_part(keep[fd]);
	keep[fd] = second_part(keep[fd]);
	return (next_line);
}
