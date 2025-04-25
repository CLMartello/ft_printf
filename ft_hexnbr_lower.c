/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnbr_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:37:53 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/25 19:49:24 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexnbr_lower(int n)
{
	int	count;

	while (n > 0)
	{
		count++;
		if ((n % 16) < 10)
			ft_putchar((n % 16) + '0');
		else
			ft_putchar((n % 16) + 87);
	}
	return (count);
}
