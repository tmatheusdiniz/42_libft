/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:14:14 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/09 23:59:34 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;

	number = n;
	if (number < 0)
	{
		ft_putchar('-', fd);
		number = -number;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	ft_putchar((number % 10) + '0', fd);
}