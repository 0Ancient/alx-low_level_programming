#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* FILE_OPERATIONS_H */

