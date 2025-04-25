/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:20:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/25 18:34:34 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
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
