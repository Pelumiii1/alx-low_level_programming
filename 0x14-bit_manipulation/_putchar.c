#include <unistd.h>
/**
 * _putchar - writs the characteer c to stdout
 * @c: the character to print
 * Return: on success 1
 * on error, -1 is retured, and errno is set appropriately
 */

int _putchar(char c){
    return (write(1, &c, 1));
}