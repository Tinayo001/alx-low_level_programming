#include <stdio.h>

/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf ("%s\n", argv[0]);
	}
	else
	{
		printf ("Program not found\n");
	}
	return (0);
}
