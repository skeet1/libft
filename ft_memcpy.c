/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:19:44 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/05 08:56:57 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
int	main()
{
	char	dest[] = "";
	char	src[] = "";
	size_t	r = 0;
	printf("%s\n", ft_memcpy(dest, src, r));
	printf("%s\n", memcpy(dest, src, r));
}
