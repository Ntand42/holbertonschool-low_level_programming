#include "main.h"

/**
 * print_triangle - prints a triangle of given size
 * @size: size of the triangle
 *
 * Description: Prints a right-aligned triangle using '#' characters
 * If size is 0 or less, prints only newline
 * Only uses _putchar function
 * Return: void
 */
void print_triangle(int size)
{
    int row, spaces, hashes;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        /* Print leading spaces */
        for (spaces = size - row; spaces > 0; spaces--)
        {
            _putchar(' ');
        }
        
        /* Print hashes */
        for (hashes = 1; hashes <= row; hashes++)
        {
            _putchar('#');
        }
        
        _putchar('\n');
    }
}
