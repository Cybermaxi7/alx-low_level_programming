#include <stdio.h>
#include "main.h"
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
        _putchar(*sh);
        sh++;
    }
    _putchar('\n');

    return (0);
}