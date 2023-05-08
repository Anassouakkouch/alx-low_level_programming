#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file, prints  to POSIX stdout.
 * @filename:  point the name of the file.
 * @letters:  number of letters, function should read and print.
 *
 * Return: If function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ov, re, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	ov = open(filename, O_RDONLY);
	re = read(ov, buff, letters);
	wr = write(STDOUT_FILENO, buff, re);

	if (ov == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(ov);

	return (wr);
}
