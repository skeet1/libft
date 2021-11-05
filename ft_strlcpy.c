/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 07:52:33 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/05 08:48:41 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lenSrc;
	size_t	i;

	i = 0;
	lenSrc = ft_strlen(src);
	if (lenSrc > size)
		return (lenSrc);
	if (lenSrc < size - 1)
	{
		while (src[i] && lenSrc + i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lenSrc);
}/*
int     main()
{
    char s[] = "hello";
    char src[] = " world";
    size_t size = 3;

    printf("%ld\n", ft_strlcpy(s, src, size));
	printf("%s\n", s);
    printf("%ld", strlcpy(s, src, size));
}*/
