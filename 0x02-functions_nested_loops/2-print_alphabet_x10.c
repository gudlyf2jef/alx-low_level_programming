#include "main.h"
/**
* print_alphabet_x10 -> prints the lowercase alphabet
*
*Retunr: always returns 0
*/
void print_alphabet_10x(void)
{
char j;
char x;
for (x = 0; x <= 9; x++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
