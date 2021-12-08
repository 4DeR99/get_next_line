/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:07:26 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/08 17:29:55 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s0, char *s1)
{
	int		c0;
	int		c1;
	int		len;
	char	*re;

	if (!s0)
		return (ft_strdup(""));
	len = ft_strlen(s0) + ft_strlen(s1);
	re = (char *)malloc(len + 1);
	if (!re)
		return (0);
	c0 = 0;
	c1 = 0;
	while (s0[c1])
		re[c0++] = s0[c1++];
	c1 = 0;
	while (s1[c1])
		re[c0++] = s1[c1++];
	re[c0] = '\0';
	return (free(s0), re);
}

int	ft_strlen(const char *c)
{
	int	l;

	l = 0;
	while (c[l])
		l++;
	return (l);
}

int	ft_strchr(char *str, int c)
{
	int		index;
	char	c1;
	char	*str1;

	if (!str)
		return (1);
	str1 = (char *)str;
	index = 0;
	c1 = (char)c;
	while (str1[index] != c1 && str1[index])
		index++;
	if (str1[index] == c1)
		return (0);
	return (1);
}


char	*ft_strdup(const char *s)
{
	char	*re;
	int		len;
	int		i;

	len = ft_strlen(s);
	re = (char *)malloc(len + 1);
	if (!re)
		return (0);
	i = 0;
	while (s[i])
	{
		re[i] = s[i];
		i++;
	}
	re[i] = '\0';
	return (re);
}
