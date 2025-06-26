/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:44:06 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/28 13:55:19 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pointdest;
	unsigned char	*pointsrc;

	if (!dest && !src)
		return (NULL);
	pointdest = (unsigned char *)dest;
	pointsrc = (unsigned char *)src;
	while (n--)
		*pointdest++ = *pointsrc++;
	return (dest);
}
/*
int main(void)
{
    char src[] = "Hello";
    char dest[6];

    ft_memcpy(dest, src, 6);
    printf("Copied: %s\n", dest);
    return (0);
}*/
