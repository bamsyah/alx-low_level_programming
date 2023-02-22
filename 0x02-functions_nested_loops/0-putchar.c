#include "main.h"

/**
 * main - Print _putchar
 * Return: Always 0
 */
int main(void)
{
	int i;
	char p[] = "_putchar";

	i = 0;
	while (p[i])
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
