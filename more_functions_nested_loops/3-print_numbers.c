#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Description: Prints numbers 0 through 9 followed by a new line
 * Only uses _putchar twice in the code
 * Return: void
 */
void print_numbers(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        _putchar(num + '0');
    }
    _putchar('\n');
}
