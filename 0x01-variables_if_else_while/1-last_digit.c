#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Returns the output of the function
 * Return: 0
*/
int main(void)
{
	int n, digit;

	digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (digit > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit < 6 && digit > 0)
	{
		printf("Last digit of %d is %d and less than 6 and no 0\n", n, digit);
	}

	return (0);
}
