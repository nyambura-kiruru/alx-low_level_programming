#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry poitn of the program
 * Prints alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar(10); /* Aline for ascii code for the new line*/

	return (0);
}
