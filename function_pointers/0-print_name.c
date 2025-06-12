#include "function_pointers.h"

/**
 * print_name - Prints a name using a callback function
 * @name: The name to print
 * @f: Function pointer to the printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}
