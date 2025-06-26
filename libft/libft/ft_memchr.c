/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 00:19:26 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/28 00:16:48 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main() 
{
    const char *str = "Hello, World!";
    char search_char = ' ';
    size_t search_size = 13;

    // Using ft_memchr to find the first occurrence of 'o' in str
    void *result = ft_memchr(str, search_char, search_size);

    if (result != NULL) {
        printf("Found '%c' at position: %ld\n", search_char
	, (char *)result - str);
    } else {
        printf("'%c' not found in '%s'\n", search_char, str);
    }

    return 0;
}*/
