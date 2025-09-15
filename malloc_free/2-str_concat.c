#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *res;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2])
		len2++;

	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!res)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (j = 0; j < len2; j++)
		res[i + j] = s2[j];
	res[i + j] = '\0';

	return (res);
}
