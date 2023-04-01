#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * - Dora Korpar, 2015-10-19
 *followed ny a new line
 *
 * Return: 1 (Success) Tis shows that the program is successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
