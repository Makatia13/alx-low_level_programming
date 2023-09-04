#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-Now to read text file to be printed stdout.
 * @filename:It text file being read.
 * @letters:Shows numbers of letters to be read
 * Return: w- Actual number of byts read and printed
 *        0 when function fails or filename is equal to NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t ffd;
	ssize_t k;
	ssize_t m;

	ffd = open(filename, O_RDONLY);
	if (ffd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	k = read(ffd, buff, letters);
	m = write(STDOUT_FILENO, buff, k);

	free(buff);
	close(ffd);
	return (m);
}


