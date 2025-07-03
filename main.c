#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	void *ptr = (void *)-1;

	printf("Expected: [%p]\n", ptr); // 31
	ft_printf("Your ft:   [");       // 12
	ft_putptr((unsigned long)ptr);  // 18 (should be!)
	ft_printf("]\n");                // 2
}

