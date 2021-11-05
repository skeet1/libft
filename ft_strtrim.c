/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:49:50 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/04 13:20:23 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cins(char c, char *s)
{
	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	len;
	size_t	end;
	char	*str;

	if (!s1)
		return ((char *)s1);
	i = 0;
	while (s1[i] && ft_cins(s1[i], (char *)set) == 1)
		i++;
	start = i;
	i = ft_strlen((char *)s1) - 1;
	while (s1[i] && ft_cins(s1[i], (char *)set) == 1)
		i--;
	end = i;
	len = end - start + 1;
	str = ft_substr((char *)s1, start, len);
	str[len + 1] = '\0';
	return (str);
}
