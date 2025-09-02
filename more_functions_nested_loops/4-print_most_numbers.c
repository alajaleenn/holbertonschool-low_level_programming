#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers
 *
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}

