/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:44:44 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/25 20:36:28 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_print_type(char c, va_list arg)
{
	int	count;

	if (c == 'c')
		count = ft_putchar(va_arg(arg, char));
	if (c == 's')
		count = ft_putstr(va_arg(arg, (char *)));
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(arg, int));
	if (c == 'u')
		count = ft_putnbr_unsint(va_arg(arg, unsigned int));
	if (c == 'x')
		count = ft_hexnbr_lower(va_arg(arg, int));
	if (c == 'X')
		count = ft_hexnbr_upper(va_arg(arg, int));
	if (c == '%')
		count = ft_putchar('%');
	if (c == 'p')
		count = ;
	return (count);
}

//#include <stdarg.h>
//#include <unistd.h>

int	ft_printf(const char *str, ...)
{
	va_list	arg;
//	int	total;
	int	i;
	int	count;

	va_start(arg);
//	total = va_arg(args, int);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			//precisa colocar um contador de args aqui? nao
			count += ft_print_type(str[++i], arg);
			i += 2;
		}
		write(1, &str[i], 1);
		i++;
		count++;
	}
//	while (j < total)
//	{
//		function_find_type(va_copy(args));
//		j++;
//	}
	va_end(arg);
//	count = ft_real_print(*str);
	return (count);
}

int	main(void)
{
	ft_printf("Testando %d isso daqui");
	return (0);
}

	ft_printf("testando %u", -13);
