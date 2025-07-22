/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:37:53 by clumertz          #+#    #+#             */
/*   Updated: 2025/05/01 20:31:39 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address(void *p)
{
	unsigned long	n;

	n = (unsigned long)p;
	if (!n)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_hexnbr(n, 'x'));
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	void	*p;

	a = 16;
	p = &a;
	int b =	ft_hexnbr_address(p);
	write(1, "\n", 1);
	printf("%d\n", b);
	int c = printf("%p\n", p);
	printf("%d\n", c);
	return (0);
}*/
