#include "main.h"

/**
 *binary_to_unit - convert binary to unsigned int
 * @b: string containing the binary
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int val = 0;

    if (!b)
        return (0);

    for (i = 0; b[i]; i++)
    {
        if (b[i] < '0' || b[i] > '1')
            return (0);
        val = 2 * val + (b[i] - '0');
    }
    return val;
}
