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
//    char *output = printLcs(
//            read_file("C:\\Users\\alessandro\\Desktop\\stringa1.txt"),
//            read_file("C:\\Users\\alessandro\\Desktop\\stringa2.txt"));
 // write_file("C:\\Users\\alessandro\\Desktop\\output.txt", output);

  return 0;
}
