#include <stdio.h>
/**
*main -> a program that print all single digit number of base 10
*starting from 0, followed by a new line.
* Return: Always 0(Success)
*/
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
