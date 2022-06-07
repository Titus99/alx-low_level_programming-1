#include <stdioi.h>
#include "main.h"

/**
 * print_alphabet - function that prints alphabet in lower case
 * Return: 0
*/
void print_alphabet(void)
{
	char m;

	m = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
}
