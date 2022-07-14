#include "main.h"
/**
 * string_toupper -> counverting any string to upper case
 * @x: string param
 * Return: string
 */
char *string_toupper(char *x)
{
int i = 0;

while (x[i])
{
if (x[i] >= 97 && x[1] <= 122)
x[1] = x[i] - 32;
i++;
}
}
