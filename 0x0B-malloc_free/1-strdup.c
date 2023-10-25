#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * _strdup - return a pointer to a newly allocated
 * space in memory also duplicate the string it holds
 * to the new space
 *
 * @str: initial input string
 *
 * Return: pointer to the memory allocated which is am array of characters
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[1] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)

		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
