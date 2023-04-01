#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of a program.
 * @argc: argument count variable.
 * @argv: argument vector variable.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int numb1, numb2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	prod = numb1 * numb2;

	printf("%d\n", prod);

	return (0);
}
