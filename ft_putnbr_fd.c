/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:10:39 by mkarim            #+#    #+#             */
/*   Updated: 2021/11/03 08:24:34 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		c = '-';
		write(fd, &c, 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		c = nb + 48;
		write(fd, &c, 1);
	}
}

int		main(void)
{
	int		fd;

	fd = open("hello", O_CREAT | O_RDWR);
	ft_putnbr_fd(-2147483648, fd);
}
