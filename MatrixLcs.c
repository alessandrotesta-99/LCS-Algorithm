//
// Created by alessandro on 09/03/2022.
//
#include "MatrixLcs.h"
#include <stdlib.h>

matrix* allocate(unsigned int nrows, unsigned int ncols)
{
    struct Matrix matrix;
    matrix.rows = nrows;
    matrix.cols = ncols;
    matrix.data = (int **)malloc(sizeof(char *) * nrows);
    for(int x = 0; x < nrows; x++){
        matrix.data[x] = (int *)calloc(ncols, sizeof(int));
    }
    struct Matrix *m;
    m = &matrix;
    return m;
}

void free_matrix(matrix* mat, unsigned int rows) {
    if (mat != NULL) {
        for (int i = 0; i < rows; i++) {
            if(mat->data[i] != NULL){
                mat->data[i] = NULL;
                free(mat->data[i]);
            }
        }
        mat = NULL;
        free(mat);
    }
}


