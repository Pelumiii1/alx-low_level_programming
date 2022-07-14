#include "main.h"

/**
 * reverse_array -> reversing an array
 * @a: array 1
 * @n: an element of an array
 * Return: 
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int tmp;

i = 0;
j = n - 1;

while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;
j--;
}
}
