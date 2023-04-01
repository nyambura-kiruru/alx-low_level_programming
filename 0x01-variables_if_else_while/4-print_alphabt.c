#include <stdio.h>
/**
*main -> a program that print the alphabet in lowercase,followed by a new line.
* Return: Always 0(Success)
*/
int main(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph != 'q' && alph != 'e')
{
putchar(alph);
}
}
putchar(10); /* a line for ascii code for the new line*/
return (0);
}
