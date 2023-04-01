#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of char.
 * @size: input array size.
 * @c: input char value.
 * Return: an array of char.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	if (size  == 0)
		return (NULL);
	str = (char *)malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	for (j = 0; j < size ; j++)
		str[j] = c;
	return (str);
}
