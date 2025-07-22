/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:20:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/05/01 20:27:10 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
		i += ft_putchar(s[i]);
	return (i);
}

/*
#include <fcntl.h>

int     main(void)
{
        int fd;
        char *s = "banana";

        fd = open("testfd.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
        if (fd == -1)
                return (1);
        ft_putstr_fd(s, fd);
        close(fd);
        return (0);
}*/
