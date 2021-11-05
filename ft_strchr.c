/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:22:54 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/04 11:24:31 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		len;

	len = ft_strlen((char *)s);
	i = -1;
	while (++i <= len)
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
