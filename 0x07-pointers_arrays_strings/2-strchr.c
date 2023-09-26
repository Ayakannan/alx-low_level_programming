#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - check the code
* @s: string
* @c: charater
* Return: pointer to the first occurrence
*/

char *_strchr(char *s, char c)
{
	char *f;

	f = strchr(s, c);
	return (f);
}
