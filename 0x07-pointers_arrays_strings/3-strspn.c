#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - check the code
 *
 * @s: bytes from accept
 * @accept: pointer
 *
 * Return: Always n.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}
