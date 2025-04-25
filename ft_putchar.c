/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:56:59 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/25 18:35:24 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/*
#include <fcntl.h>

int	main(void)
{
	int fd;
	char c = 'A';

	fd = open("testfd.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
	if (fd == -1)
		return (1);
	printf("fd in use = %d\n", fd);
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}*/
