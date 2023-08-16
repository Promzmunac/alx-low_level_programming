#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return:void
 */

void print_alphabet(void)
{
	char texts;

	for (texts = 'a'; texts <= 'z'; texts++)
		_putchar(texts);
	_putchar('\n');
}
