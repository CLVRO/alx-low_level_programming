#include "main.h"
/**
 * _strlen-find the lenght of a string
 * @s: pointer to the string to check
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}


