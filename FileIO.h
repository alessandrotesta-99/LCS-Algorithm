
#ifndef ALESSANDROTESTA105380_FILEIO_H
#define ALESSANDROTESTA105380_FILEIO_H
#include <stdio.h>

FILE *get_file(char *path, char* mode);
char *read_file(char *path);
void write_file(char *path, char *content);
long getLength(FILE *file);


#endif //ALESSANDROTESTA105380_FILEIO_H
