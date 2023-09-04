#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Readtext file print toSTDOUT.
 * @filename: text_file beingread
 * @letters: numberof lettersto be read
 * Return: actualnumber bytesread and printed
 * 0 when function fails orfilename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf
	ssize_t fd;
	ssize_t m;
	ssize_t p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	p = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
