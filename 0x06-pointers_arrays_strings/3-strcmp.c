#include "main.h"
#include <string.h>
/**
 * _strcmp -> for comparing purposes
 * @s1: param1
 * @s2: param2
 * Return: integar
 */
int _strcmp(char *s1, char *s2)
{
int i;
int R;

i = 0;

while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
R = s1[i] - s2[i];
return (R);
}
