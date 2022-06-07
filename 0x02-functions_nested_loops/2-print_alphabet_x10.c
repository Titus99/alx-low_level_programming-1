#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function that prints 10 times the alphabet, in lowercase
 * Return: 0
*/

void print_alphabet_x10(void)
{
	char m;
	int j;

	j = 0;

	while (j < 10)
	{
		m = 'a';
		while (m <= 'z')
		{
			putchar(m);
			m++;
		}
		putchar('\n');
		j++;
	}
}
