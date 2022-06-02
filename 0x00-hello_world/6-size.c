#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	char charType;
	int intType;
	float floatType;
	double doubleType;

	printf("Size of  char: %zu byte\n", sizeof(charType));
	printf("Size of  int: %zu bytes\n", sizeof(intType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of  float: %zu bytes\n", sizeof(floatType));
	return (0);
}
