/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:33:31 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/07 18:17:46 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nbofl(char *s, char c)
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

static	char	**remplissage(char **p, char *s, char c, int l)
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
	p[i] = 0;
	return (p);
}

static	char	**ft_free(char **p, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		free(p[i]);
		i++;
	}
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		l;
	int		i;
	int		j;
	int		cl;

	l = nbofl((char *)s, c);
	p = (char **)malloc((l + 1) * sizeof(char *));
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
		p[i] = (char *)malloc((cl + 1) * sizeof(char));
		if (!p[i])
			return (ft_free(p, i));
		i++;
	}
	return (remplissage(p, (char *)s, c, l));
}
/*
int main()
{
	char	**str;
	int		l;
	char	s[] = "-1-2--3---4----5-----42";
	char	c = '-';
	int		i;

	i = 0;
	l = nbofl(s, c);
	printf("%d\n", l);
	str = ft_split(s, c);
	while (i <= l)
	{
		printf("s[%d] = %s\n", i, str[i]);
		i++;
	}
	if (sizeof(str) == (sizeof(char *) * 7))
		printf("goood");
}*/
