#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
        int num;

        /* Print numbers 0-9 */
        for (num = 0; num < 10; num++)
                putchar(num + '0');

        /* Print letters a-f */
        for (num = 'a'; num <= 'f'; num++)
                putchar(num);

        putchar('\n');

        return (0);
}
