/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:48:33 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/02 10:38:36 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nb_digits(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	int		len;
	long	nb;
	char	*p;

	size = 0;
	if (n < 0)
		size = 1;
	len = nb_digits(n) + size;
	p = (char *)malloc(len);
	if (!p)
		return (p);
	nb = n;
	if (nb < 0)
	{
		p[0] = '-';
		nb *= -1;
	}
	while (--len >= size)
	{
		p[len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (p);
}

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	return (0);
}
