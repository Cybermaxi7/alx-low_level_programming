#include <stdio.h>
/**
 * main - entry point
 * Description: software is eating the world
 * Return: always 0(success)
 */
int main(void)
{
int c;
int d;
for (c = 0; c <= 99; c++)
{
for (d = c + 1; d <= 99; d++)
{
putchar(c / 10 + '0');
putchar(c % 10 + '0');
putchar(' ');
putchar(d / 10 + '0');
putchar(d % 10 + '0');
if (!(c == 98 && d == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}