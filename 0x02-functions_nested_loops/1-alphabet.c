#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * return: nothing
 */
void print_alphabet(void)
{
	int i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
