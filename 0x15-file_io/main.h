#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif

