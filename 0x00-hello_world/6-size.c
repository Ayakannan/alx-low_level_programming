#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (succes)
  */
int main(void)
{
	printf("Size of char: %d byte(s)", sizeof(char));
	printf("Size of int: %d byte(s)", sizeof(int));
	printf("Size of long int: %d byte(s)", sizeof(long int));
	printf("Size of long long int: %d byte(s)", sizeof(long long int));
        printf("Size of float: %d byte(s)", sizeof(float));
	return (0);
}
	      
