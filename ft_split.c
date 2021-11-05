/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:22:51 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/04 15:13:53 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbofl(char *s, char c)
{
	int		l;
	int		i;

	i = 0;
	l = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			l++;
		i++;
	}
	return (l);
}

char	**remplissage(char **p, char *s, char c, int l)
{
	int		i;
	int		j;
	int		cl;

	i = 0;
	j = 0;
	cl = 0;
	while (i < l)
	{
		cl = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c)
		{
			p[i][cl] = s[j];
			j++;
			cl++;
		}
		p[i][j] = '\0';
		i++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		l;
	int		i;
	int		j;
	int		cl;

	if (!s)
		return (NULL);
	l = nbofl((char *)s, c);
	p = (char **)malloc(l * sizeof(char *));
	if (!p)
		return (p);
	i = 0;
	j = 0;
	while (i < l)
	{
		cl = 0;
		while (s[j] == c)
			j++;
		while (s[j++] != c)
			cl++;
		p[i] = (char *)(malloc(cl + 1));
		i++;
	}
	return (remplissage(p, (char *)s, c, l));
}
