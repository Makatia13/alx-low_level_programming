#include "main.h"

/**
 * set_bit -Sets a bit at a given indx to 1
 * @n:Pointer to numbr to change
 * @index: indx of  bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
