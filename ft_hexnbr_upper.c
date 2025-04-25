/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnbr_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:49:59 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/25 20:33:52 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int     ft_hexnbr_upper(int n)
{
        int     count;

        while (n > 0)
        {
                count++;
                if ((n % 16) < 10)
                        ft_putchar((n % 16) + '0');
                else
                        ft_putchar((n % 16) + 55);
        }
        return (count);
}
