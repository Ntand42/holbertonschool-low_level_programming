#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int num = 0;

        while (num <= 9)
        {
                putchar(num + '0');
                if (num != 9)
                {
                        putchar(',');
                        putchar(' ');
                }
                num++;
        }
        putchar('\n');

        return (0);
}
