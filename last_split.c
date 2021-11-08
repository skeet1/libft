/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:33:31 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/07 18:16:01 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nb_words(char const *s, char c)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		nb_words;
	int		i;
	int		cl;

	nb_words = nb_words(s, c);
	p = (char **)malloc((nb_words + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	i = 0;
	while (i < nb_words)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s++ != c)
			cl++;
		p[i] = (char *)malloc((cl + 1) * sizeof(char));
		if (!p[i])
			return (ft_free(p, i));
		i++;
	}
	return (ft_remplissage(p, s, 


}

int main()
{
	printf("%d\n", nb_words("**helloI**world", '*'));
}
