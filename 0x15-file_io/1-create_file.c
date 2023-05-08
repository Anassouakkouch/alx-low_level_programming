#include "main.h"

/**
 * create_file - Create a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the string to be written to the file.
 *
 * Return: If function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int ouv, wri, lon = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lon = 0; text_content[lon];)
			lon++;
	}

	ouv = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wri = write(ouv, text_content, lon);

	if (ouv == -1 || wri == -1)
		return (-1);

	close(ouv);

	return (1);
}
