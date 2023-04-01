#include "main.h"
/**
* *_strcat - concatenates two strings
* @dest: secondstring to be concatenataed to src
* @src: first string to be concatenated to dest
* Return: pointer totheresulting string dest
*/
char *_strcat(char *dest, char *src)
{
int x, y;
for (x = 0; dest[x] != '\0'; x++)
;
for (y = 0; src[y] != '\0'; y++)
{
dest[x] = src[y];
x++;
}
dest[x] = '\0';
return (dest);
}
