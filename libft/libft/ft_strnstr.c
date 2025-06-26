/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 00:41:13 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/28 16:34:24 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0' || little == big)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void) 
{
    const char *haystack = "This is a simple test string.";
    const char *needle = "i";
    size_t len = 25;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) 
    {
        printf("Found '%s' in the string at position: %ld\n"
	, needle, result - haystack);
    } else 
    {
        printf("'%s' not found in the first %zu characters of '%s'\n"
	, needle, len, haystack);
    }

    return 0;
}*/
