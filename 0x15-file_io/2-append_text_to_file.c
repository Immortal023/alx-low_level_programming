#include "main.h"

/**
 * append_text_to_file - Appendstext atthe end of a file.
 * @filename: pointerto thename of the file.
 * @text_content: Thestring toaddto theend ofthe file.
 * Return: Ifthe function fails or filename is NULL - -1.
 * If the file does not exist the user lackswrite permissions.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
