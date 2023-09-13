#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - perfoms simple operations on two integers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: 0 is successful,98,99, or 100 if an error occurs
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (!op_func || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '/') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
