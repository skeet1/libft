/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:02:30 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/04 18:57:35 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(sub) == 0 || len == 0)
		return ((char *)s);
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == sub[j] && i + j < len)
		{
			if (sub[j + 1] == '\0')
				return ((char *)(s + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
