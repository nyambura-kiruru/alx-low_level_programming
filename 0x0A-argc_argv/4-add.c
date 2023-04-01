#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int numb, result = 0, k;

	while (argc-- > 1)
	{
		for (k = 0; argv[argc][k]; k++)
		{
			if (!(isdigit(argv[argc][k])))
			{
				printf("Error\n");
				return (1);
			}
		}
		numb = atoi(argv[argc]);
		result += numb;
	}
	printf("%d\n", result);
	return (0);
}
