/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:58:38 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/29 13:02:29 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *r, size_t n)
{
	size_t	i;
	char	*str;

	str = r;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "1234567";

	printf("Before: %s\n", str);
	ft_bzero(str, 2);
	printf("After:  [%d][%d]%s\n", str[0], str[1], &str[2]);

	return (0);
}*/
