/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:14:44 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/06 17:21:14 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	dest = s1;
	src = s2;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
