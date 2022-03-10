#include <stdio.h>
/**
 * main - main function
 * Description: prints size of variable types
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %i byte(s)", sizeof(char));
	printf("Size of an int: %i byte(s)", sizeof(int));
	printf("Size of a long int: %i byte(s)", sizeof(long int));
	printf("Size of a long long int: %i byte(s)", sizeof(long long int));
	printf("Size of a float: %i byte(s)", sizeof(float));
	return (0);
}
