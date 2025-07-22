/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:37:53 by clumertz          #+#    #+#             */
/*   Updated: 2025/05/01 20:45:41 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexnbr(unsigned long int n, char c)
{
	char	*base;
	int		count;

	count = 0;
	if (n > 15)
		count += ft_hexnbr((n / 16), c);
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	count += ft_putchar(base[n % 16]);
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	int b =	ft_hexnbr(LONG_MAX, 'x');
	write(1, "\n", 1);
	printf("%d\n", b);
	int a = printf("%x", LONG_MAX);
	printf("%d\n", a);
	return (0);
}*/
