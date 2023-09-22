#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Function to print the opcodes of a given function
 *
 * @param num_bytes: The number of bytes to print
 */

void print_opcodes(int num_bytes);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);

	return (0);
}
