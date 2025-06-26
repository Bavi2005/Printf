/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 17:39:54 by bpichyal          #+#    #+#             */
/*   Updated: 2025/05/28 13:06:53 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>


size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen(src);
	if (!dest && size == 0)
		return (si);
	d = ft_strlen(dest);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = 0;
	return (di + si);
}
/*
int main(void)
{
    char dest[20] = "ni bavi";
    const char *src = ", tauuuuu!";

    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("Concatenated: %s\n", dest);
    printf("Return value: %zu\n", result);

    return 0;
}*/
