#include<stdio.h>
/**
*main - entry point
*
* Return: always returns 0
*/
int main(void)
{
int i;
int j;
for (i = 0 + 1; j <= 99; i++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (!(1 == 98 && j == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
