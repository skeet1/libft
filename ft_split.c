/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:33:31 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/01 16:05:07 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_l(char const *s, char c)
{
	int		i;
	int		l;

	i = 1;
	l = 0;
	if ((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z'))
		l = 1;
	while (s[i])
	{
		if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && s[i - 1] == c)
			l++;
		i++;
	}
	return (l);
}

int		count_c(char const *s, char c)
{
	int		i;
	int		ch;

	i = 0;
	ch = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		ch++;
	}
	return (ch);
}
		
char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		l;

	i = 0;
	l = count_l(s, c);
	*str = (char *)malloc(l);
	while (i < l)
	{
		str[i] = (char)malloc(
}
