#include "main.h"

/**
 * print_square - prints a square of given size
 * @size: size of the square
 *
 * Description: Prints a square using '#' characters
 * If size is 0 or less, prints only newline
 * Only uses _putchar function
 * Return: void
 */
void print_square(int size)
{
    int row, col;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
