#include "main.h"

/**
 * append_text_to_file -a ppend text to end of the file.
 * @filename: Pointer to the file name.
 * @text_content: String to add at end of file.
 *
 * Return: If the function fails or the filename is NULL - -1.
 *         If the file does not exist the user lacks write permissio - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ouv, wri, lo = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[lo];)
			lo++;
	}

	ouv = open(filename, O_WRONLY | O_APPEND);
	wri = write(ouv, text_content, lo);

	if (ouv == -1 || wri == -1)
		return (-1);

	close(ouv);

	return (1);
}
