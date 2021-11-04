/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:30:27 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/04 10:45:44 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (str[i] && i < n)
	{
		str[i] = 0;
		i++;
	}
}
int main()
{
	char s[11] = "hello world";
	ft_bzero(s+4, 1);
	printf("%s\n", s);
}
