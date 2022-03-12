
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "FileIO.h"

FILE *get_file(char *path, char* mode){
    FILE *fp = fopen(path, mode);
    if(fp == NULL) {
        perror("Could not open the file");
        exit(EXIT_FAILURE);
    }
    return fp;
}
char *read_file(char *path){
    char *buffer;
    int ch;
    FILE *file = get_file(path , "rb");
    fseek(file,0,SEEK_END);
    long size = getLength(file);
    fseek(file,0,SEEK_SET);
    buffer = malloc(size+1);
    if (!buffer) {
        fclose(file);
        fputs("Memory allocation failed", stderr);
        exit(1);
    }
    for (int i = 0; (i < size); i++) {
        ch = fgetc(file);
        buffer[i] = tolower(ch);
    }
    buffer[size] = '\0';
    fread (buffer, sizeof(char), size, file);
    return buffer;
}

void write_file(char *path, char *content){
    FILE *f = get_file(path, "wb");
    fputs(content, f);
}

long getLength(FILE *file){
    return ftell(file);
}
