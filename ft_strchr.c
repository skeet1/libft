/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:22:54 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/04 10:30:53 by mkarim           ###   ########.fr       */
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

int main(void)
{
	char s[] = "hello world";
	char c = '\0';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
}
