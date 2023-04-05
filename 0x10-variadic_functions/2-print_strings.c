#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;
	const char *s;

	if (separator == NULL)
		s = "";
	else
		s = separator;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
		{
			if (i == n - 1)
				printf("(nil)");
			else
				printf("(nil)%s", s);
		}
		else
		{
			if (i == n - 1)
				printf("%s", str);
			else
				printf("%s%s", str, s);
		}
	}
	va_end(args);

	printf("\n");
}
