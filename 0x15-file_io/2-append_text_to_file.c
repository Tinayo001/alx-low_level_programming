#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the edn of a file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-2);
	}
	if (fprintf(file, "%s", text_content) < 0)
	{
		fclose(file);
		return (-3);
	}
	fclose(file);

	return (1);
}
