#include "main.h"
/**
*print_alphabet_x10 - print alphabet 10 times
*Return: void
*/
void print_alphabet_x10(void)
{
int count = 0;
char ch = 'a';
while (count < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
count++;
}
}
