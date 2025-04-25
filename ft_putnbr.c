/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:26:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/25 19:29:40 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_putnbr_int_min(void)
{
        ft_putstr("-2147483648");
	return (11);
}

int	ft_putnbr(int n)
{
	int	count;	

	count = 0;
	if (n == -2147483648)
		return (ft_putnbr_int_min());	
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
		count = 1;
	}
	else if (n > 9)
	{
		count++;
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
	{
		count++;
		ft_putchar(n + '0');
	}
	return (count);
}
/*
#include <fcntl.h>

int     main(void)
{
        int fd;
        int n = -854955;

        fd = open("testfd.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
        if (fd == -1)
                return (1);
        ft_putnbr_fd(n, fd);
        close(fd);
        return (0);
}*/
