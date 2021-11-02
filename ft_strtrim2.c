/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:49:50 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/02 14:03:20 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		startCheck(char	*s, char *set)
{
	int		i;
	int		lenSet;

	i = 0;
	lenSet = ft_strlen(set);
	while (s[i] == set[i] && i < lenSet)
	{
		if (set[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	p = (char *)malloc(ft_strlen((char *)s1));
	if (!p)
		return (p);
	if (startCheck((char *)s1, (char *)set) == 1)
		i = ft_strlen((char *)set);
	while (s[i++])
		p[i] = s1[i];

}

int		main(void)
{
	printf("%d\n", startCheck("Hello world", "hel"));
}
