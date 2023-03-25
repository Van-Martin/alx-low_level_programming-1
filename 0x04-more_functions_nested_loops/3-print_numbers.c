#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: No values
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
