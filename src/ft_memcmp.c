/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:08:34 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/02 18:30:54 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n -- > 0)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1 ++;
		s2 ++;
	}
	return (0);
}

int	main(void)
{
	char	*s1 = "Hello World!";
	char	*s2 = "Hello World.";
	printf("Result : %i\n", ft_memcmp(s1, s2, 12));
}