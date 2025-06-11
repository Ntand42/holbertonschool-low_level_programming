#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2 and 4
 *
 * Description: Prints numbers 0 through 9 (excluding 2 and 4)
 * followed by a new line. Only uses _putchar twice.
 * Return: void
 */
void print_most_numbers(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        if (num != 2 && num != 4)
            _putchar(num + '0');
    }
    _putchar('\n');
}
