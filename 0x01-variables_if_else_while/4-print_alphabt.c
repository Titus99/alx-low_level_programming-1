#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;

	}
	putchar('\n');
	return (0);
}
