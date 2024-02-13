#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result;

	if (argc != 3)
	{
		printf ("error");
		return (1);
	}
	result = num1 * num2;

	printf ("%d\n", result);

	return (0);
}
