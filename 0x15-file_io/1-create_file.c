#include "main.h"

/**
 * create_file - a function that reads a text file and prints it to stdout
 * @filename: string input for text file
 * @text_content: number of letters ir should read and print
 * Return: actual number of leeters it could read and print, 0 if file cant
 * be accessed or if file is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int aux, x, i;

	aux = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	for (i = 0; text_content[i]; i++)
		;
	x = write(aux, text_content, i);
	if (x == -1)
		return (-1);
	return (1);
}
