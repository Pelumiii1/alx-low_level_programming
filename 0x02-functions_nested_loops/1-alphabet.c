#include "main.h"

/**
 * print_alphabet - No entry point
 *
 * Return: on success nothing.
 *
 */
void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
