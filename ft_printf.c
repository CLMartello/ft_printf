/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:44:44 by clumertz          #+#    #+#             */
/*   Updated: 2025/05/01 20:11:18 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_type(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(arg, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_hexnbr(va_arg(arg, unsigned int), c));
	else if (c == 'p')
		return (ft_address(va_arg(arg, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_print_type(str[++i], arg);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
			count++;
		}
	}
	va_end(arg);
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
//	int a = ft_printf("mine: %p %p ", LONG_MIN, LONG_MAX);
//	write(1, "\n", 1);
//	int b = printf("orig: %p %p ", LONG_MIN, LONG_MAX);
//	int a = ft_printf(" %p %p ", 0, 0);
//	int b = printf(" %p %p ", 0, 0);
	int a = ft_printf(" %x ", LONG_MAX);
	int b = printf(" %x ", LONG_MAX);
	printf("%d e %d\n", a, b);
	return (0);
}*/
