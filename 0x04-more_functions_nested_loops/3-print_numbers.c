#include "main.h"

/**
 * print_numbers - entry point
 * Description: prints the number from 0 to 9
 * Return: 0
*/

void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		_putchar(j + '0');
	}

	_putchar('\n');
}
