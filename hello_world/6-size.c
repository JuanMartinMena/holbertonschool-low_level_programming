#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%lu 1\n", sizeof(char));
	printf("%lu 4\n", sizeof(int));
	printf("%lu 4\n", sizeof(long int));
	printf("%li 8\n", sizeof(long long int));
	printf("%lu 4\n", sizeof(float));
	return 0;
}

