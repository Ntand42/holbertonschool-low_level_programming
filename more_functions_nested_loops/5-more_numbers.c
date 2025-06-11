#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14
 *
 * Description: Prints 0-14 ten times with newlines
 * Only uses _putchar three times in the code
 * Return: void
 */
void more_numbers(void)
{
    int i, num;

    for (i = 0; i < 10; i++)
    {
        for (num = 0; num <= 14; num++)
        {
            if (num > 9)
                _putchar((num / 10) + '0');
            _putchar((num % 10) + '0');
        }
        _putchar('\n');
    }
}
