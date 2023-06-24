#include "main.h"

/**
 * print_numbers - print the numbers from 1 to 9
 */
int _putchar(char c);
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}

	printf('\n')

}
