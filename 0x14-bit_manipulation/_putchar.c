#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char to standadized output
 * @c: The char to be  printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

