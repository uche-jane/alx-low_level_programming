#include <stdio.h>

/**
 * main - Entry point
 * Description: the program's description
 * parameter: describe the parameter
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	char charType;
	float floatType;

	printf("size of a char: %zu byte(s)\n", sizeof(charType));
	printf("size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
