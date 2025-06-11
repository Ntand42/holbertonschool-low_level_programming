#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character '_' should be printed
 *
 * Description: Prints '_' n times followed by newline
 * If n is 0 or less, only prints newline
 * Only uses _putchar function
 * Return: void
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
