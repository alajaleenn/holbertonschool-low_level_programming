#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to a char
 * @needle: pointer to a char
 *
 * Return: s or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
