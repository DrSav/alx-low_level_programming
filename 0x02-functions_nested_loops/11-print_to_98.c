#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from input to 98
 * 		 printed in order, separated by a comma
 * 		 followed by a space
 * 		COunting begins at n
 */
void print_to_98(int n)
{
	if  (n >= 98);
	{
		while (n > 98)
			printf("&d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
