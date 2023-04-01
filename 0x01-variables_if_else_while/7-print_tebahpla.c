#include <stdio.h>
/**
*main -> a program that prints the lowercase alphabet in reverse,
*followed by a new line.
* Return: Always 0(Success)
*/
int main(void)
{
int alph;
for (alph = 'z'; alph >= 'a'; alph--)
{
putchar(alph);
}
putchar(10);
return (0);
}
