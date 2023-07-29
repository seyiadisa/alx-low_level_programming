#ifndef BIT_H
#define BIT_H

#include <stdlib.h>

unsigned int binary_to_uint(const char *);
int _putchar(char);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif