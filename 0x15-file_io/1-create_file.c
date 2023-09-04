#include "main.h"

/**
 * create_file - Create a file.
 * @filename: A pointer to the name of file to create
 * @text_content: A pointer to string to write in the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_dir, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[length];)
			length++;
	}

	file_dir = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_dir, text_content, len);

	if (file_dir == -1 || w == -1)
		return (-1);

	close(file_dir);

	return (1);
}
