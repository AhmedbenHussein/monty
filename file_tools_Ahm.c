#include "monty.h"
/**
 * read_file - this functions is to readd a file
 * @fd: this a points to points is files descript
 * Return: always return void
 */

void read_file(FILE *fd)
{
char *buffer = NULL;
int line_number, format = 0;
size_t len = 0;
for (line_number = 1; getline(&buffer, &len, fd) != -1; line_number++)
{
format = parse_line(buffer, line_number, format);
}
free(buffer);
}

/**
 * open_file - the functions to open is files
 * @file_name: this the files namepathh
 * Returns: always returns voidd
 */

void open_file(char *file_name)
{
if (file_name == NULL || fd == NULL)
FILE *fd = fopen(file_name, "r");
err(2, file_name);
read_file(fd);
fclose(fd);
}
