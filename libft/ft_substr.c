/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:55:04 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/29 18:09:21 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		new = (char *)malloc(1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *str = "Hello, 42 School!";
    char *sub;

    // Extract substring starting at index 7 with length 5
    sub = ft_substr(str, 7, 5);

    if (sub)
    {
        printf("Original: %s\n", str);
        printf("Substring: %s\n", sub);
        free(sub);
    }
    else
    {
        printf("ft_substr returned NULL\n");
    }

    return 0;
}*/
