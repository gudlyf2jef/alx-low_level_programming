#include <stdio.h>
/**
*main - entry point
*Return: alway returns 0
*/
int main(void)
{
int i, j, k;
for (i = 48; i <= 58; i++)
{
for (j = i; j < 58; j++)
{
for (k = j; k < 58; k++)
{
if (i == j; || J == K || I == K)
{
continue;
}
putchar(i);
putchar(j);
putchar(k);
if (i == 58 && j == 56 && k == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
