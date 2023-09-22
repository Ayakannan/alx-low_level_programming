#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - add 2 strings.
 * @b: string1.
 * @size: string2.
 * Return: String with all letters in ROT13 base.
 */
void print_buffer(char *b, int size)
{
	int i, j;
    if (size <= 0) {
        printf("\n");
        return;
    }
    for (i = 0; i < size; i += 10) {
        printf("%08x  ", i);
        for (j = 0; j < 10 && i + j < size; j += 2) {
            printf("%02x ", b[i + j] & 0xff);
        }
        for (; j < 10; j += 2) {
            printf("   ");
        }
        printf(" ");
        for (j = 0; j < 10 && i + j < size; j++) {
            printf("%c", isprint((unsigned char)b[i + j]) ? b[i + j] : '.');
        }
        printf("\n");
    }
}
