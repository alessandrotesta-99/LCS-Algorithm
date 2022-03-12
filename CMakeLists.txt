cmake_minimum_required(VERSION 3.19)
project(AlessandroTesta105380 C)

set(CMAKE_C_STANDARD 11)

add_executable(extractlcs main.c MatrixLcs.h FileIO.h LCSAlgorithm.h FileIO.c MatrixLcs.c LCSAlgorithm.c)