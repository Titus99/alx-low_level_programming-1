#include "main.h"

/**
 * print_numbers - entry point
 * Description: prints the number from 0 to 9
 * Return: 0
*/

void print_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		_putchar(j);
	}

	_putchar('\n');
}
