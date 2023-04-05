#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly allocated space in memory containing the
 *	contents of `s1` followed by the contents of `s2` and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0;
	int len2 = 0;
	int i = 0;

	if (s1 == NULL)
		len1 = 0;
	else
		while (*(s1 + len1))
			len1++;
	if (s2 == NULL)
		len2 = 0;
	else
		while (*(s2 + len2))
			len2++;

	str = malloc(sizeof(char) * (len1 + len2));

	if (str == NULL)
		return (NULL);

	if (len1 != 0)
	{
		while (i < len1)
		{
			*(str + i) = *(s1 + i);
			i++;
		}
	}
	if (len2 != 0)
	{
		while (i < (len2 + len1))
		{
			*(str + i) = *(s2 + (i - len1));
			i++;
		}
	}
	*(str + i) = '\0';

	return (str);
}
