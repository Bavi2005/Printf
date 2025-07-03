/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpichyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 17:37:53 by bpichyal          #+#    #+#             */
/*   Updated: 2025/07/03 17:38:23 by bpichyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i = 0;
	int	len = 0;

	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
		len += ft_putchar(str[i++]);
	return (len);
}

int ft_putnbr(int n)
{
	long num = n;
	int len = 0;
	if (num < 0)
	{
		len += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
		len += ft_putnbr(num / 10);
	len += ft_putchar((num % 10) + '0');
	return (len);
}

int ft_putunsigned(unsigned int n)
{
	int len = 0;
	if (n >= 10)
		len += ft_putunsigned(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}



int ft_puthex(unsigned int n, int uppercase)
{
	int len = 0;
	char *base = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (n >= 16)
		len += ft_puthex(n / 16, uppercase);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putptr_rec(unsigned long ptr)
{
	int	len = 0;

	if (ptr >= 16)
		len += ft_putptr_rec(ptr / 16);
	len += ft_putchar("0123456789abcdef"[ptr % 16]);
	return (len);
}

int	ft_putptr(unsigned long ptr)
{
	int	len = 0;

	write(1, "0x", 2);
	len += 2;

	if (ptr == 0)
		len += ft_putchar('0');
	else
		len += ft_putptr_rec(ptr);

	return (len);
}

