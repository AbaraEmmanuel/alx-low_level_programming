#include "main.h"

/**
* read_textfile - Read a text file and write it to STDOUT.
* @filename: The name of the file to read.
* @letters: The number of letters to read and write.
* Return: The number of letters actually read and written, or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t nletters;
    int file;
    char *text;

    if (!filename)
        return (0);

    text = malloc(sizeof(char) * letters);
    if (text == NULL)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
    {
        free(text);
        return (0);
    }

    nletters = read(file, text, letters);
    if (nletters == -1)
    {
        free(text);
        close(file);
        return (0);
    }

    nletters = write(STDOUT_FILENO, text, nletters);
    if (nletters == -1)
    {
        free(text);
        close(file);
        return (0);
    }

    free(text);
    close(file);
    return (nletters);
}
