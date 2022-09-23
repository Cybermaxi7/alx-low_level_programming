#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return zero
 *
 */
int main(void)
{
    char *sh = "_putchar";

    while (*sh)
    {
        putchar(*sh);
        sh++;
    }
    putchar('\n');

    return (0);
}