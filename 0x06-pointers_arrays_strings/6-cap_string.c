#include "main.h"
#include <stdio.h>

/**
* *cap_string - this is awesome
* @s: pointer to char params
*
* Return: *s
*/

char *cap_string(char *s)
{
int m, j;
char delimeters[] = " \t\n,;.!?\"(){}";

for (m = 0; s[m] != '\0'; m++)
{
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
for (j = 0; delimeters[j] != '\0'; j++)
if (s[m] == delimeters[j] && s[m + 1] >= 97 && s[m + 1] <= 122)
s[m + 1] = s[m + 1] - 32;
}
return (s);
}
