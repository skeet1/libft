/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:49:50 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/03 09:22:40 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isinstr(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i])
		if (s[i++] == c)
			return (1);
	return (0);
}

void	rightTrim(char *s1, char *set)
{
	int		tR;

	tR = ft_strlen(s1) - 1;
	while (isinstr(set, s1[tR]) == 1 && tR > 0)
		tR--;
	s1[++tR] = '\0';
	printf("%c\n", s1[4]);
}

void	ft_strtrim(char const *s1, char const *set)
{
	rightTrim((char *)s1, (char *)set);
}

int		main(void)
{
	//printf("%d\n", isinstr("hello", 'H'));
	ft_strtrim("hello..", ".");
}

