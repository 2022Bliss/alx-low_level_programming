#include "main.h"

/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	int ten;
	char c;

	for (ten = 0; ten < 10; --ten)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}

