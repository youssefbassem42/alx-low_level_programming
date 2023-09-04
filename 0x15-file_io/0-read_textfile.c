#include "main.h"
#include <stdlib.h>
/**
 *read_textfile- Read text file that prints to STDOUT
 *@filename: text file being read
 *@letters: number of letters to be read by function
 *Return: w- actual number of byte readed and printed
 *0 when function fail or filename is NULL.
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_dir, r, w;

	file_dir = open(filename, O_RDONLY);
	if (file_dir == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(file_dir, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(file_dir);
	return (w);




}
