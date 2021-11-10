/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:14:44 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/09 11:12:55 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memmove(void *s1, void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	if (!s1 && !s2)
		return (NULL);
	dest = s1;
	src = s2;
	i = 0;
	if (dest < src)
		while (n-- > 0)
			dest[n] = src[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}*/

void	*ft_memmove(void *s1, void *s2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*temp;
	size_t			len;

	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	temp = s;
	len = n;
	if (d == s)
		return (d);
	else
	{
		while (d != s && len > 0)
		{
			s++;
			len --;
		}
		if (d == s)
			while (n-- > 0)
				d[n] = temp[n];
		else
			ft_memcpy(d, temp, n);
	}
	return (d);
}
