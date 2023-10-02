#include "main.h"
/**
 * read_textfile - Read text file print
 * @filename: text to read
 * @letters: number of letters
 * Return: 0 if the filename is NULL or function fail to read,
 *	acutal number of bytes if success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filed;
	ssize_t wr;
	ssize_t t;

	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(filed, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(filed);
	return (wr);
}
