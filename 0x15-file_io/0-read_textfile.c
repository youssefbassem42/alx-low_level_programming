#include "main.h"

/***/

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
