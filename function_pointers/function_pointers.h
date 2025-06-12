#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: Name to print
 * @f: Function pointer that determines how to print
 *
 * Description: This function takes a name and a function pointer,
 *              then prints the name according to the function's logic.
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
