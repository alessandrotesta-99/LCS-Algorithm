#include "FileIO.h"
#include "LCSAlgorithm.h"
#include <stdlib.h>

int main(int argc, char **argv) {
    char* output;
        if (argc == 4) {
            output = printLcs(read_file(argv[1]), read_file(argv[2]));
            write_file(argv[3], output);
            free(output);
        }
        else{
            printf("Incorrect number of arguments!");
            exit(1);
        }

  return 0;
}
