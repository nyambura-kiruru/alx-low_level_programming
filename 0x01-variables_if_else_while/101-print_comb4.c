#include <stdio.h>
/**
*main -> a program that print all possible different combination of three digit
* Return: always 0
*/
int main(void)
{
int i;
for (i = 48; i < 56; i++)
{
int n;
for (n = i + 1; n < 57; n++)
{
int j;
for (j = n + 1; j < 58; j++)
{
putchar(i);
putchar(n);
putchar(j);
if (i == 55 && n == 56 && j == 57)
continue;
putchar(44);
putchar(32);
}
}
}

putchar(10); /**This is ascii code for a new line **/
return (0);
}
