#include "main.h"

/**
 * print_alphabet - prints the english alphabet from a-z.
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}