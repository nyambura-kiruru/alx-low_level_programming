#include <stdio.h>
/**
*main - Entry point of a program
*a program that print all possible different combinations of two digits
*Return: always 0
**/
int main(void)
{
int ev;
int odd;
for (ev = 48; ev <= 57; ev++)
{
for (odd = 49; odd <= 57; odd++)
{
if (ev > odd)
{
putchar(ev);
putchar(odd);
if (ev != 56 || odd != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10); /**This is ascii code for a new line **/
return (0);
}
