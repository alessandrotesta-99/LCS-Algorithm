#include "FileIO.h"
#include "LCSAlgorithm.h"
int main() {
  write_file("C:\\Users\\alessandro\\Desktop\\output.txt", printLcs(
          read_file("C:\\Users\\alessandro\\Desktop\\stringa1.txt"),
          read_file("C:\\Users\\alessandro\\Desktop\\stringa2.txt")));
    return 0;
}
