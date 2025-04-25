/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:06:30 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/25 19:09:55 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_unsint(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count++;
		ft_putnbr_unsint(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
	{
		count++;
		ft_putchar(n + '0');
	}
	return (count);
}
