#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocate 1024 byte to the buffer
 * @doc:  name the file buffer to storing chars for.
 *
 * Return: Pointer for the new-allocated buffer.
 */
char *create_buffer(char *doc)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", doc);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes the file description.
 * @i: File description is closed.
 */
void close_file(int i)
{
	int a;

	a = close(i);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
}

/**
 * main - copie of contents for file to another file.
 * @argc: Number of argument supplied for program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int f, t, e, y;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	e = read(f, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || e == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		y = write(t, buff, e);
		if (t == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		e = read(f, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (e > 0);

	free(buff);
	close_file(f);
	close_file(t);

	return (0);
}
