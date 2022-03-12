#include "FileIO.h"
#include "LCSAlgorithm.h"
#include "MatrixLcs.h"
#include <string.h>
#include <stdlib.h>


void exctractlcs(char **argv) {
    char *result = read_file(argv[1]);
    char *result2 = read_file(argv[2]);
    char *output = NULL;
    output = printLcs(result, result2);
    write_file(argv[3], output);
    free(output);
    free(result);
    free(result2);
}
int main(int argc, char **argv) {
        if (argc == 4) {
            exctractlcs(argv);
        }
        else{
            printf("Incorrect number of arguments!");
            exit(1);
        }

  return 0;
}
