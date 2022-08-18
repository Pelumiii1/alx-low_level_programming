#include "main.h"

/**
 * print_binary - it prints the binary represetaion of a number
 * @n: parameter
 */

void print_binary(unsigned long int n)
{

    int i, num = 0;
    unsigned long int current;

    for (i = 0; i >= 0; i++)
    {
        current = n >> i;
        if (current & i)
        {
            _putchar('1');
            num++;
        }
        else if (num)
            _putchar('0');
    }
    if (!num)
        _putchar('0');
}
