#include <stdio.h>

/**
 * main - Entry point
 * prints alphabet in lowercase, and then in uppercase
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int alph;

	for (alph = 97; alph <= 122; alph++)
	{
		putchar(alph);
	}
	for (alph = 65; alph <= 90; alph++)
	{
		putchar(alph);
	}
	putchar(10); /* A line for ascii code for the new line*/
	return (0);
}
