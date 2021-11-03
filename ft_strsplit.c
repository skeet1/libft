/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:22:51 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/03 12:11:32 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbofL(char *s, char c)
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

char	**ft_strsplit(char const *s, char c)
{
	char	*p[nbofL((char *)s, c)];
	int		l;
	int		i;
	int		j;
	int		cl;

	l = nbofL((char *)s, c);
	i = 0;
	j = 0;
	while (i < l)
	{
		cl = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c)
		{
			cl++;
			j++;
		}
		p[i] = (char *)(malloc(cl + 1));
		i++;
	}
	return (remplissage(p, (char *)s, c, l));
}

int		main(void)
{
	char	s[] = "****hello****world*how*are*you****";
	char	c = '*';
	char	**str;
	int		i;

	str=  ft_strsplit(s, c);
	i = 0;
	while (i < 5)
		printf("%s\n", str[i++]);
}
