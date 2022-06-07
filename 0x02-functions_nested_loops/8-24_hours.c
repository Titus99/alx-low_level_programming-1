#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: prints every minute of the day
 * Return: 0
*/
void jack_bauer(void)
{
	int n, m;

	n = 0;

	while (n < 24)
	{
		m = 0;

		while (m < 60)
		{
			_putchar((n / 10 + '0');
					_putchar((n % 10) + '0');
					_putchar((':');
						_putchar((m / 10) + '0');
						_putchar((m % 10) + '0');
						_putchar('\n');
						m++;
		}
		n++;
	}
}
