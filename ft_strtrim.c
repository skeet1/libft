/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:49:50 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/07 14:25:51 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_in_str(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	int		len;
	char	*p;

	i = 0;
	while (s1[i] && c_in_str(set, s1[i]) == 1)
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (c_in_str(set, s1[i]) == 1)
		i--;
	end = i + 1;
	len = end - start + 1;
	if (start > end)
		len = 1;
	p = (char *)malloc((len) * sizeof(char));
	if (!p)
		return (p);
	i = 0;
	while (start < end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
