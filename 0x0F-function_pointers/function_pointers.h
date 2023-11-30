#ifndef FUNCTION_H
#define FUNCTION_H

#include <stddef.h>

int _putchar(char c);
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int, int (*)(int));

#endif
