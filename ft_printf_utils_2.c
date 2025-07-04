/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:55:47 by bpichyal          #+#    #+#             */
/*   Updated: 2025/07/04 16:56:53 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_get_hexbase(int uppercase)
{
	if (uppercase)
		return ("0123456789ABCDEF");
	return ("0123456789abcdef");
}

int	ft_puthex(unsigned int n, int uppercase)
{
	int		len;
	char	*base;

	len = 0;
	base = ft_get_hexbase(uppercase);
	if (n >= 16)
		len += ft_puthex(n / 16, uppercase);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putptr_rec(unsigned long ptr)
{
	int	len;

	len = 0;
	if (ptr >= 16)
		len += ft_putptr_rec(ptr / 16);
	len += ft_putchar("0123456789abcdef"[ptr % 16]);
	return (len);
}

int	ft_putptr(unsigned long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len += 2;
	write(1, "0x", 2);
	len += ft_putptr_rec(ptr);
	return (len);
}
