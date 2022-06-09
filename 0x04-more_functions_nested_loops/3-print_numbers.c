#include "main.h"

/**
 * print_numbers - entry point
 * Return: 0
*/

void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; )
	{
		_putchar(j + '0');
	}

	_putchar('\n');
}
