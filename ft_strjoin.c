/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:23:37 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/02 13:08:21 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	s = malloc(strlen(s1) + strlen(s2));
	i = 0;
	j = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s[i + j] = s2[j];
		j++;
	}
	return (s);
}

int	main(void)
{
	printf("%s\n", ft_strjoin("Hello ", "World"));
}
