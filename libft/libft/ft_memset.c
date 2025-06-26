/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:55:42 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/29 17:21:19 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
		*p++ = (unsigned char) c;
	return (s);
}
/*

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char buffer[10];

	ft_memset(buffer, 'A', 8);


	for (int i = 0; i < 8; i++)
		ft_putchar(buffer[i]);

	return 0;
}*/
