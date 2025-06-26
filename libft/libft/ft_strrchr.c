/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:46:37 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/28 00:14:23 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int main() 
{
    const char *text = "Hello, world!";
    char search_char = 'o';

    char *result = ft_strrchr(text, search_char);

    if (result != NULL) {
        printf("Last occurrence of '%c' found at position: %ld\n"
	, search_char, result - text);
    } else {
        printf("Character '%c' not found in the string.\n", search_char);
    }

    return 0;
}*/
