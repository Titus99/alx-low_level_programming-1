#include <stdio.h>
#include "main.h"

/**
 * print _alpabet - function that prints alphabet in lower case
 * Return: 0
*/
void print_alphabet(void);
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
