#include "main.h"
#include <stdlib.h>

/**
 * createArray - Create an array of a specified size and initialize it with a given character.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Description: This function creates an array of the specified size and initializes
 * each element with the provided character 'c'.
 *
 * Return: A pointer to the created array. Returns NULL if the allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
