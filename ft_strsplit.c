/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:22:51 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/03 11:35:21 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbofL(char *s, char c)
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

void	remplissage(char **p, char *s, char c, int l)
{
	int		i;
	int		j;
	int		cl;

	i = 0;
	j = 0;
	cl = 0;
	while (i >=0)
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
		i++;
	}
	printf("%s\n", p[0]);
}

void	**ft_split(char const *s, char c)

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
		printf("%d\n", cl);
		p[i] = (char *)(malloc(cl));
		i++;
	}
	//return (remplissage(p, (char *)s, c, l));
}

int		main(void)
{
	char	s[] = "*hello****world*how*are*you****";
	char	c = '*';

	ft_split(s, c);
}
