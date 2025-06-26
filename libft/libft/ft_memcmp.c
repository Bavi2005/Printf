/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 00:33:48 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/28 00:11:43 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while ((*ptr == *ptr1) && n - 1 > 0)
	{
		ptr++;
		ptr1++;
		n--;
	}
	return ((int)(*ptr - *ptr1));
}
/*
#include <stdio.h>

int main() 
{
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    size_t n = 13;

    // Using ft_memcmp to compare str1 and str2
    int result = ft_memcmp(str1, str2, n);

    if (result == 0) {
        printf("The first %zu bytes of both strings are equal.\n", n);
    } else if (result < 0) {
        printf("str1 is less than str2 in the first %zu bytes.\n", n);
    } else {
        printf("str1 is greater than str2 in the first %zu bytes.\n", n);
    }

    return 0;
}*/
