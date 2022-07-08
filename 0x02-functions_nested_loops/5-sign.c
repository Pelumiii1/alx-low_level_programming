#include <stdio.h>
#include "main.h"
/**
 * print_sign - check main
 * @n: An integer input
 * Description; Write a function that prints the sign of a number
 * Return: print the sign of n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		/*printf("%d is greater than zero.\n", n);*/
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
