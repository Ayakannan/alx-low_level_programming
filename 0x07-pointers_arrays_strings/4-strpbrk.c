#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: ponter byte in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	char *t;

	t = strpbrk(s, accept);
	return (t);
}
