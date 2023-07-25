#include "main.h"

/**
  * _strcmp -  a function that compares two strings
  * @s1: first string to be checked
  * @s2: second string to be checked
  *
  * Return: an int greater than, equal to, or less than zero if
  * s1 is greater than s2, equal to s2, or less than s2 respectively.
  */
int _strcmp(char *s1, char *s2)
{
	int i, diff;
	int str1len = 0;
	int str2len = 0;

	while (s1[str1len] != '\0')
		str1len++;

	while (s2[str2len] != '\0')
		str2len++;

	for (i = 0; i < str1len && i < str2len; i++)
	{
		if (s1[i] > s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else if (s1[i] < s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = 0;
		}
	}

	return (diff);
}
