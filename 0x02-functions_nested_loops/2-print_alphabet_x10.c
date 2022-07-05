#include "main.h"
/**
* print_alphabet_x10 -> a function that proints 10 letters
*
* Return: always returns 0
*/
void print_alphabet_10x(void)
{
int j;
int x;
for (x = 0; x < 10; x++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
