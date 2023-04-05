#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @c: char
 * @sep: separator
 */
void print_char(const int c, const char *sep)
{
	printf("%c%s", c, sep);
}

/**
 * print_int - prints an int
 * @i: int
 * @sep: separator
 */
void print_int(const int i, const char *sep)
{
	printf("%d%s", i, sep);
}

/**
 * print_float - prints a float
 * @f: float
 * @sep: separator
 */
void print_float(const double f, const char *sep)
{
	printf("%f%s", f, sep);
}

/**
 * print_string - prints a string
 * @str: string
 * @sep: separator
 */
void print_string(const char *str, const char *sep)
{
	if (str == NULL)
	{
		printf("(nil)%s", sep);
		return;
	}

	printf("%s%s", str, sep);
}

/**
 * print_all - prints anything
 * @format: a string indicating the types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	va_list args;
	const char *sep = ", ";
	int len = 0;
	int i = 0;

	va_start(args, format);

	while (format[len])
		len++;

	while (format[i])
	{
		if (i == len - 1)
			sep = "";

		switch (format[i])
		{
		case 'c':
			print_char(va_arg(args, int), sep);
			break;
		case 'i':
			print_int(va_arg(args, int), sep);
			break;
		case 'f':
			print_float(va_arg(args, double), sep);
			break;
		case 's':
			print_string(va_arg(args, const char *), sep);
			break;
		default:
			break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
