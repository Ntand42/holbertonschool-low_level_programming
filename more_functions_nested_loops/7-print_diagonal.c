#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: Prints diagonal line made of '\' characters
 * Each '\' is indented with spaces to create diagonal effect
 * If n ≤ 0, prints only newline
 * Only uses _putchar function
 * Return: void
 */
void print_diagonal(int n)
{
    int i, spaces;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        for (spaces = 0; spaces < i; spaces++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
}
