#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string to be searched
 * @needle: substring
 *
 * Return: pointer to the beginning of substring; NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;
	int i;

	while (*haystack)
	{
		if (*needle == *haystack)
		{
			for (i = 0, temp = needle;; temp++, i++)
				if (!*temp)
					return (haystack);
			if (*temp != *(haystack + i))
				break;
		}
		haystack++;
	}

	return (NULL);
}
