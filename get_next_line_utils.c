/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:07:26 by moulmado          #+#    #+#             */
/*   Updated: 2021/12/08 13:57:49 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s0, char *s1)
{
	int		c0;
	int		c1;
	int		len;
	char	*re;

	if (!s1)
		return (s0);
	len = ft_strlen(s0) + ft_strlen(s1);
	re = (char *)malloc(len + 1);
	if (!re)
		return (0);
	// c0 = 0;
	// c1 = 0;
	// while (s0[c1])
	// 	re[c0++] = s0[c1++];
	// c1 = 0;
	// while (s1[c1])
	// 	re[c0++] = s1[c1++];
	// re[c0] = '\0';
	// free(s0);
	// return (re);
	c0 = -1;
	c1 = 0;
	if (s0)
		while (s0[++c0])
			re[c0] = s0[c0];
	while (s1[c1])
		re[c0++] = s1[c1++];
	re[len] = '\0';
	free(s0);
	return (re);
}

int	ft_strlen(const char *c)
{
	int	l;

	l = 0;
	while (c[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	c1;
	char	*str1;

	str1 = (char *)str;
	index = 0;
	c1 = (char)c;
	while (str1[index] != c1 && str1[index])
		index++;
	if (str1[index] == c1)
		return ((str1 + index));
	return (0);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*re;
	size_t	s_l;
	size_t	i;
	size_t	re_l;

	if (!s)
		return (0);
	s_l = ft_strlen(s);
	if (start >= s_l)
		return (ft_strdup(""));
	if (len > s_l - start)
	{
		len = s_l - start;
		re_l = s_l - start;
	}
	if (len <= s_l - start)
		re_l = len;
	re = (char *)malloc(re_l + 1);
	if (!re)
		return (0);
	i = 0;
	while (s[start] && i < re_l)
		re[i++] = s[start++];
	re[i] = '\0';
	return (re);
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
