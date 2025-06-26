/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <bpichyal@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:52:55 by Bavi              #+#    #+#             */
/*   Updated: 2025/05/29 17:55:58 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void			*a;
	size_t			total;
	size_t			i;
	unsigned char	*ptr;

	if (nitems != 0 && size > (size_t)-1 / nitems)
		return (NULL);
	total = nitems * size;
	a = malloc(total);
	if (!a)
		return (NULL);
	ptr = (unsigned char *)a;
	i = 0;
	while (i < total)
		ptr[i++] = 0;
	return (a);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    size_t nitems = 10;
    size_t size = sizeof(int);
    int *custom_array;
    int *stdlib_array;
    int i;

    // Using your custom ft_calloc
    custom_array = (int *)ft_calloc(nitems, size);
    if (!custom_array)
    {
        printf("ft_calloc failed!\n");
        return (1);
    }

    // Using standard calloc for comparison
    stdlib_array = (int *)calloc(nitems, size);
    if (!stdlib_array)
    {
        printf("Standard calloc failed!\n");
        free(custom_array);
        return (1);
    }

    // Display the values in both arrays
    printf("ft_calloc output:\n");
    for (i = 0; i < (int)nitems; i++)
        printf("%d ", custom_array[i]);
    printf("\n");

    printf("Standard calloc output:\n");
    for (i = 0; i < (int)nitems; i++)
        printf("%d ", stdlib_array[i]);
    printf("\n");

    // Clean up
    free(custom_array);
    free(stdlib_array);

    return (0);
}
*/
