#include "main.h"

/**
 *_strlen - function that returns the length of a string
 *@s: the string
 *Return: lenth of s
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		i++;

	return (i);
}
