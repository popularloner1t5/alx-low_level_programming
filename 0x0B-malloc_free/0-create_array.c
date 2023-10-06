#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of characters
 *
 * @size: an input for the size of the array in int
 * @c: to store the strings of character
 *
 * Return: a pointer to the base character c
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[1] = c;
	}
	return (str);
}
