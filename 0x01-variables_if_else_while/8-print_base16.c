#include <stdio.h>

/**
*main -> assign a random number to the variable n each time it is excuted
*and print the last digit of the number stored in the variable n
*Return: always 0
*/
int main(void)
{
/*
* hexadecimal
*0 1 2 3 4 5 6 7 8 9 a b c d e f
*/
char hex;
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar(10);
return (0);
}
