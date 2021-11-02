/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:02:30 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/02 08:15:33 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == sub[j])
		{
			if (sub[j + 1] == '\0')
				return ((char *)s + i);
			j++;
		}
		i++;
	}
	return ((char *)0);
}
